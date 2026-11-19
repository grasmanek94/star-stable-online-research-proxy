#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>

#include <array>
#include <atomic>
#include <charconv>
#include <chrono>
#include <condition_variable>
#include <cstdint>
#include <cstring>
#include <deque>
#include <iostream>
#include <map>
#include <memory>
#include <mutex>
#include <span>
#include <stdexcept>
#include <string>
#include <string_view>
#include <thread>
#include <utility>
#include <vector>

namespace {
using Clock = std::chrono::steady_clock;
using Bytes = std::span<const unsigned char>;
constexpr auto session_lifetime = std::chrono::minutes(5);
constexpr std::size_t max_sessions = 256;
std::atomic_bool stopping = false;

BOOL WINAPI stop_on_console_event(DWORD event) {
    if (event == CTRL_C_EVENT || event == CTRL_BREAK_EVENT) {
        stopping.store(true);
        return TRUE;
    }
    return FALSE;
}

std::runtime_error network_error(std::string_view operation, int code) {
    return std::runtime_error(std::string(operation) + " failed (Winsock " + std::to_string(code) + ")");
}

class Winsock {
public:
    Winsock() {
        WSADATA data{};
        const int error = WSAStartup(MAKEWORD(2, 2), &data);
        if (error != 0) {
            throw network_error("WSAStartup", error);
        }
    }

    ~Winsock() { WSACleanup(); }
    Winsock(const Winsock&) = delete;
    Winsock& operator=(const Winsock&) = delete;
};

class Socket {
public:
    explicit Socket(int family) : handle_(socket(family, SOCK_DGRAM, IPPROTO_UDP)) {
        if (handle_ == INVALID_SOCKET) {
            throw network_error("socket", WSAGetLastError());
        }
        u_long nonblocking = 1;
        if (ioctlsocket(handle_, FIONBIO, &nonblocking) == SOCKET_ERROR) {
            const int error = WSAGetLastError();
            closesocket(handle_);
            throw network_error("ioctlsocket", error);
        }
    }

    ~Socket() {
        if (handle_ != INVALID_SOCKET) {
            closesocket(handle_);
        }
    }

    Socket(Socket&& other) noexcept : handle_(std::exchange(other.handle_, INVALID_SOCKET)) {}
    Socket& operator=(Socket&&) = delete;
    SOCKET get() const { return handle_; }

private:
    SOCKET handle_;
};

struct Address {
    sockaddr_storage storage{};
    int length = sizeof(storage);

    sockaddr* data() { return reinterpret_cast<sockaddr*>(&storage); }
    const sockaddr* data() const { return reinterpret_cast<const sockaddr*>(&storage); }

    std::string numeric() const {
        std::array<char, NI_MAXHOST> host{};
        std::array<char, NI_MAXSERV> port{};
        const int error = getnameinfo(data(), length, host.data(), static_cast<DWORD>(host.size()),
                                      port.data(), static_cast<DWORD>(port.size()), NI_NUMERICHOST | NI_NUMERICSERV);
        if (error != 0) {
            throw network_error("getnameinfo", error);
        }
        if (storage.ss_family == AF_INET6) {
            return "[" + std::string(host.data()) + "]:" + port.data();
        }
        return std::string(host.data()) + ":" + port.data();
    }
};

Address resolve(std::string_view endpoint, bool listener) {
    const auto separator = endpoint.rfind(':');
    if (separator == std::string_view::npos || separator == 0) {
        throw std::runtime_error("Expected HOST:PORT or [IPv6]:PORT");
    }
    auto host = endpoint.substr(0, separator);
    const auto service = endpoint.substr(separator + 1);
    if (host.size() >= 2 && host.front() == '[' && host.back() == ']') {
        host = host.substr(1, host.size() - 2);
    } else if (host.find(':') != std::string_view::npos) {
        throw std::runtime_error("Bracket the IPv6 address");
    }
    unsigned int port = 0;
    const auto [end, error] = std::from_chars(service.data(), service.data() + service.size(), port);
    if (error != std::errc{} || end != service.data() + service.size() || port > 65535 || (!listener && port == 0)) {
        throw std::runtime_error("Invalid UDP port");
    }
    if (listener && host != "127.0.0.1" && host != "::1") {
        throw std::runtime_error("The listener must use 127.0.0.1 or [::1]");
    }
    if (host.empty()) {
        throw std::runtime_error("Expected a host name or IP address");
    }

    addrinfo hints{};
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_DGRAM;
    hints.ai_protocol = IPPROTO_UDP;
    hints.ai_flags = listener ? AI_NUMERICHOST : 0;
    addrinfo* results = nullptr;
    const int status = getaddrinfo(std::string(host).c_str(), std::string(service).c_str(), &hints, &results);
    if (status != 0) {
        throw network_error("getaddrinfo", status);
    }
    const std::unique_ptr<addrinfo, decltype(&freeaddrinfo)> addresses(results, freeaddrinfo);
    if (!addresses || addresses->ai_addrlen > sizeof(sockaddr_storage)) {
        throw std::runtime_error("No usable UDP address");
    }
    Address address;
    address.length = static_cast<int>(addresses->ai_addrlen);
    std::memcpy(address.data(), addresses->ai_addr, addresses->ai_addrlen);
    return address;
}

Socket bind_listener(const Address& address) {
    Socket listener(address.storage.ss_family);
    const int exclusive = 1;
    if (setsockopt(listener.get(), SOL_SOCKET, SO_EXCLUSIVEADDRUSE, reinterpret_cast<const char*>(&exclusive),
                   sizeof(exclusive)) == SOCKET_ERROR) {
        throw network_error("setsockopt(SO_EXCLUSIVEADDRUSE)", WSAGetLastError());
    }
    if (bind(listener.get(), address.data(), address.length) == SOCKET_ERROR) {
        throw network_error("bind", WSAGetLastError());
    }
    return listener;
}

struct Session {
    Session(const Address& sender, const Address& destination)
        : client(sender), upstream(destination.storage.ss_family) {
        if (connect(upstream.get(), destination.data(), destination.length) == SOCKET_ERROR) {
            throw network_error("connect UDP upstream", WSAGetLastError());
        }
    }

    Address client;
    Socket upstream;
    Clock::time_point last_active = Clock::now();
};

std::string hex(Bytes bytes) {
    constexpr std::string_view digits = "0123456789abcdef";
    std::string result(bytes.size() * 2, '0');
    for (std::size_t index = 0; index < bytes.size(); ++index) {
        result[2 * index] = digits[bytes[index] >> 4];
        result[2 * index + 1] = digits[bytes[index] & 15];
    }
    return result;
}

struct Observation {
    std::int64_t time_ms;
    std::string client;
    std::string_view direction;
    std::size_t size;
    bool forwarded;
    int error;
    std::vector<unsigned char> bytes;
};

class TrafficLog {
public:
    explicit TrafficLog(bool trace) : trace_(trace), writer_([this] { write(); }) {}

    ~TrafficLog() {
        {
            const std::lock_guard lock(mutex_);
            closed_ = true;
        }
        ready_.notify_one();
        writer_.join();
    }

    void record(const std::string& client, std::string_view direction, Bytes bytes, int sent, int error) {
        const auto time = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
        const std::lock_guard lock(mutex_);
        if (records_.size() == 256) {
            ++dropped_;
            return;
        }
        Observation record{time, client, direction, bytes.size(), sent == static_cast<int>(bytes.size()), error, {}};
        if (trace_) {
            record.bytes.assign(bytes.begin(), bytes.end());
        }
        records_.push_back(std::move(record));
        ready_.notify_one();
    }

private:
    void write() {
        for (;;) {
            std::unique_lock lock(mutex_);
            ready_.wait(lock, [this] { return closed_ || !records_.empty(); });
            const auto dropped = std::exchange(dropped_, 0);
            if (records_.empty()) {
                return;
            }
            const auto record = std::move(records_.front());
            records_.pop_front();
            lock.unlock();

            if (dropped != 0) {
                std::cout << "{\"event\":\"log_overflow\",\"records_dropped\":" << dropped << "}\n";
            }
            std::cout << "{\"event\":\"udp_datagram\",\"time_unix_ms\":" << record.time_ms
                      << ",\"client\":\"" << record.client << "\",\"direction\":\"" << record.direction
                      << "\",\"datagram_bytes\":" << record.size
                      << ",\"forwarded\":" << (record.forwarded ? "true" : "false");
            if (record.error != 0) {
                std::cout << ",\"winsock_error\":" << record.error;
            }
            if (trace_) {
                std::cout << ",\"wire_hex\":\"" << hex(record.bytes) << '"';
            }
            std::cout << "}\n" << std::flush;
        }
    }

    const bool trace_;
    std::mutex mutex_;
    std::condition_variable ready_;
    std::deque<Observation> records_;
    std::size_t dropped_ = 0;
    bool closed_ = false;
    std::thread writer_;
};

class Relay {
public:
    Relay(Address destination, const Address& local, bool trace)
        : destination_(destination), listener_(bind_listener(local)), log_(trace) {
        Address bound;
        if (getsockname(listener_.get(), bound.data(), &bound.length) == SOCKET_ERROR) {
            throw network_error("getsockname", WSAGetLastError());
        }
        if (bound.numeric() == destination_.numeric()) {
            throw std::runtime_error("The upstream resolves to the relay listener");
        }
        std::cerr << "Listening on " << bound.numeric() << " with UDP upstream " << destination_.numeric() << '\n';
    }

    void run() {
        std::vector<WSAPOLLFD> poll;
        poll.reserve(max_sessions + 1);
        while (!stopping.load()) {
            const auto now = Clock::now();
            std::erase_if(sessions_, [now](const auto& item) { return now - item.second.last_active >= session_lifetime; });
            poll.clear();
            poll.push_back({listener_.get(), POLLRDNORM, 0});
            for (const auto& [client, session] : sessions_) {
                poll.push_back({session.upstream.get(), POLLRDNORM, 0});
            }
            const int ready = WSAPoll(poll.data(), static_cast<ULONG>(poll.size()), 250);
            if (ready == SOCKET_ERROR) {
                throw network_error("WSAPoll", WSAGetLastError());
            }
            if (ready == 0) {
                continue;
            }
            std::size_t index = 1;
            for (auto& [client, session] : sessions_) {
                if (poll[index++].revents != 0) {
                    from_upstream(client, session);
                }
            }
            if (poll.front().revents != 0) {
                from_client();
            }
        }
    }

private:
    void report_receive_error(std::string_view source) {
        const int error = WSAGetLastError();
        if (error != WSAEWOULDBLOCK) {
            std::cerr << "UDP receive failed from " << source << " (Winsock " << error << ")\n";
        }
    }

    void from_client() {
        Address client;
        const int received = recvfrom(listener_.get(), reinterpret_cast<char*>(buffer_.data()),
                                      static_cast<int>(buffer_.size()), 0, client.data(), &client.length);
        if (received == SOCKET_ERROR) {
            report_receive_error("client");
            return;
        }
        const auto name = client.numeric();
        const auto bytes = Bytes(buffer_).first(static_cast<std::size_t>(received));
        auto it = sessions_.find(name);
        if (it == sessions_.end()) {
            if (sessions_.size() == max_sessions) {
                log_.record(name, "client_to_upstream", bytes, SOCKET_ERROR, WSAENOBUFS);
                return;
            }
            try {
                it = sessions_.try_emplace(name, client, destination_).first;
            } catch (const std::runtime_error& error) {
                std::cerr << error.what() << '\n';
                log_.record(name, "client_to_upstream", bytes, SOCKET_ERROR, 0);
                return;
            }
        }
        auto& session = it->second;
        session.last_active = Clock::now();
        const int sent = send(session.upstream.get(), reinterpret_cast<const char*>(buffer_.data()), received, 0);
        const int error = sent == SOCKET_ERROR ? WSAGetLastError() : 0;
        log_.record(name, "client_to_upstream", bytes, sent, error);
    }

    void from_upstream(const std::string& name, Session& session) {
        const int received = recv(session.upstream.get(), reinterpret_cast<char*>(buffer_.data()),
                                  static_cast<int>(buffer_.size()), 0);
        if (received == SOCKET_ERROR) {
            report_receive_error("upstream");
            return;
        }
        session.last_active = Clock::now();
        const int sent = sendto(listener_.get(), reinterpret_cast<const char*>(buffer_.data()), received, 0,
                                session.client.data(), session.client.length);
        const int error = sent == SOCKET_ERROR ? WSAGetLastError() : 0;
        const auto bytes = Bytes(buffer_).first(static_cast<std::size_t>(received));
        log_.record(name, "upstream_to_client", bytes, sent, error);
    }

    const Address destination_;
    const Socket listener_;
    TrafficLog log_;
    std::map<std::string, Session> sessions_;
    std::array<unsigned char, 65536> buffer_{};
};

void usage(std::ostream& stream) {
    stream << "Usage: sso-proxy --upstream HOST:PORT [--listen 127.0.0.1:18971] [--trace]\n"
              "For IPv6, enclose the address in brackets. --trace includes wire bytes in stdout JSON.\n";
}
} // namespace

int main(int argc, char** argv) {
    std::cerr.tie(nullptr);
    try {
        std::string_view listen = "127.0.0.1:18971";
        std::string_view upstream;
        bool trace = false;
        for (int index = 1; index < argc; ++index) {
            const std::string_view option = argv[index];
            if (option == "--help" || option == "-h") {
                usage(std::cout);
                return 0;
            }
            if (option == "--trace") {
                trace = true;
            } else if ((option == "--upstream" || option == "--listen") && index + 1 < argc) {
                (option == "--upstream" ? upstream : listen) = argv[++index];
            } else {
                throw std::runtime_error("Invalid option or missing value: " + std::string(option));
            }
        }
        if (upstream.empty()) {
            usage(std::cerr);
            return 2;
        }

        const Winsock winsock;
        const auto destination = resolve(upstream, false);
        const auto local = resolve(listen, true);
        if (!SetConsoleCtrlHandler(stop_on_console_event, TRUE)) {
            throw std::runtime_error("Could not install the console shutdown handler");
        }
        Relay relay(destination, local, trace);
        relay.run();
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
