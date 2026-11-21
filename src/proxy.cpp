#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>

#include "hosts_redirect.h"

#include <array>
#include <atomic>
#include <charconv>
#include <chrono>
#include <condition_variable>
#include <cstdint>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <mutex>
#include <optional>
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
constexpr std::array<std::string_view, 2> directions = {"client_to_upstream", "upstream_to_client"};
enum class Transport { udp, tcp };
enum class Event { udp_datagram, tcp_open, tcp_data, tcp_half_close, tcp_close };
constexpr std::array<std::string_view, 5> event_names = {
    "udp_datagram", "tcp_open", "tcp_data", "tcp_half_close", "tcp_close"
};
std::atomic_bool stopping = false;
HANDLE hosts_cleanup_done = nullptr;

BOOL WINAPI stop_on_console_event(DWORD event) {
    if (event == CTRL_C_EVENT || event == CTRL_BREAK_EVENT) {
        stopping.store(true);
        return TRUE;
    }
    if (hosts_cleanup_done != nullptr && (event == CTRL_CLOSE_EVENT || event == CTRL_SHUTDOWN_EVENT
                                          || event == CTRL_LOGOFF_EVENT)) {
        stopping.store(true);
        WaitForSingleObject(hosts_cleanup_done, 4000);
        return TRUE;
    }
    return FALSE;
}

struct HostsCleanupSignal {
    ~HostsCleanupSignal() {
        if (hosts_cleanup_done != nullptr) {
            SetEvent(hosts_cleanup_done);
        }
    }
};

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
    Socket(int family, Transport transport)
        : Socket(socket(family, transport == Transport::tcp ? SOCK_STREAM : SOCK_DGRAM,
                        transport == Transport::tcp ? IPPROTO_TCP : IPPROTO_UDP)) {}

    explicit Socket(SOCKET handle) : handle_(handle) {
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

struct Endpoint {
    std::string hostname;
    unsigned int port;
};

Endpoint parse_endpoint(std::string_view endpoint) {
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
    if (error != std::errc{} || end != service.data() + service.size() || port > 65535) {
        throw std::runtime_error("Invalid port");
    }
    if (host.empty()) {
        throw std::runtime_error("Expected a host name or IP address");
    }
    return {std::string(host), port};
}

Address resolve(const Endpoint& endpoint, bool listener, Transport transport) {
    if (listener && endpoint.hostname != "127.0.0.1" && endpoint.hostname != "::1") {
        throw std::runtime_error("The listener must use 127.0.0.1 or [::1]");
    }
    if (!listener && endpoint.port == 0) {
        throw std::runtime_error("The upstream port must be nonzero");
    }

    addrinfo hints{};
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = transport == Transport::tcp ? SOCK_STREAM : SOCK_DGRAM;
    hints.ai_protocol = transport == Transport::tcp ? IPPROTO_TCP : IPPROTO_UDP;
    hints.ai_flags = AI_NUMERICSERV | (listener ? AI_NUMERICHOST : 0);
    addrinfo* results = nullptr;
    const auto port = std::to_string(endpoint.port);
    const int status = getaddrinfo(endpoint.hostname.c_str(), port.c_str(), &hints, &results);
    if (status != 0) {
        throw network_error("getaddrinfo", status);
    }
    const std::unique_ptr<addrinfo, decltype(&freeaddrinfo)> addresses(results, freeaddrinfo);
    if (!addresses || addresses->ai_addrlen > sizeof(sockaddr_storage)) {
        throw std::runtime_error("No usable address");
    }
    Address address;
    address.length = static_cast<int>(addresses->ai_addrlen);
    std::memcpy(address.data(), addresses->ai_addr, addresses->ai_addrlen);
    return address;
}

Socket bind_listener(const Address& address, Transport transport) {
    Socket listener(address.storage.ss_family, transport);
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

void announce_listener(const Socket& listener, const Address& destination, std::string_view transport) {
    Address bound;
    if (getsockname(listener.get(), bound.data(), &bound.length) == SOCKET_ERROR) {
        throw network_error("getsockname", WSAGetLastError());
    }
    if (bound.numeric() == destination.numeric()) {
        throw std::runtime_error("The upstream resolves to the relay listener");
    }
    std::cerr << "Listening on " << bound.numeric() << " with " << transport << " upstream "
              << destination.numeric() << '\n';
}

struct UdpSession {
    UdpSession(const Address& sender, const Address& destination)
        : client(sender), upstream(destination.storage.ss_family, Transport::udp) {
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
    Event event;
    std::string client;
    std::string_view direction{};
    std::uint64_t connection = 0;
    std::uint64_t offset = 0;
    std::size_t size = 0;
    bool forwarded = false;
    int error = 0;
    std::int64_t time_ms = 0;
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

    void record_udp(const std::string& client, std::string_view direction, Bytes bytes, int sent, int error) {
        enqueue({.event = Event::udp_datagram, .client = client, .direction = direction, .size = bytes.size(),
                 .forwarded = sent == static_cast<int>(bytes.size()), .error = error}, bytes);
    }

    void record_tcp(Event event, std::uint64_t connection, const std::string& client, std::string_view direction = {},
                    std::uint64_t offset = 0, Bytes bytes = {}, int error = 0) {
        enqueue({.event = event, .client = client, .direction = direction, .connection = connection,
                 .offset = offset, .size = bytes.size(), .error = error}, bytes);
    }

private:
    void enqueue(Observation record, Bytes bytes) {
        record.time_ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
        const std::lock_guard lock(mutex_);
        if (records_.size() == 256) {
            ++dropped_;
            return;
        }
        if (trace_) {
            record.bytes.assign(bytes.begin(), bytes.end());
        }
        records_.push_back(std::move(record));
        ready_.notify_one();
    }

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
            std::cout << "{\"event\":\"" << event_names[static_cast<std::size_t>(record.event)]
                      << "\",\"time_unix_ms\":" << record.time_ms << ",\"client\":\"" << record.client << '"';
            if (!record.direction.empty()) {
                std::cout << ",\"direction\":\"" << record.direction << '"';
            }
            if (record.event == Event::udp_datagram) {
                std::cout << ",\"datagram_bytes\":" << record.size
                          << ",\"forwarded\":" << (record.forwarded ? "true" : "false");
            } else {
                std::cout << ",\"connection\":" << record.connection;
                if (!record.direction.empty()) {
                    std::cout << ",\"offset\":" << record.offset;
                }
                if (record.event == Event::tcp_data) {
                    std::cout << ",\"stream_bytes\":" << record.size;
                }
            }
            if (record.error != 0) {
                std::cout << ",\"winsock_error\":" << record.error;
            }
            if (trace_ && (record.event == Event::udp_datagram || record.event == Event::tcp_data)) {
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

class UdpRelay {
public:
    UdpRelay(const Address& destination, const Address& local, TrafficLog& log)
        : destination_(destination), listener_(bind_listener(local, Transport::udp)), log_(log) {
        announce_listener(listener_, destination_, "UDP");
    }

    void prepare(std::vector<WSAPOLLFD>& poll) {
        const auto now = Clock::now();
        std::erase_if(sessions_, [now](const auto& item) { return now - item.second.last_active >= session_lifetime; });
        poll.push_back({listener_.get(), POLLRDNORM, 0});
        for (const auto& [client, session] : sessions_) {
            poll.push_back({session.upstream.get(), POLLRDNORM, 0});
        }
    }

    void dispatch(std::span<const WSAPOLLFD> poll) {
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
                log_.record_udp(name, directions[0], bytes, SOCKET_ERROR, WSAENOBUFS);
                return;
            }
            try {
                it = sessions_.try_emplace(name, client, destination_).first;
            } catch (const std::runtime_error& error) {
                std::cerr << error.what() << '\n';
                log_.record_udp(name, directions[0], bytes, SOCKET_ERROR, 0);
                return;
            }
        }
        auto& session = it->second;
        session.last_active = Clock::now();
        const int sent = send(session.upstream.get(), reinterpret_cast<const char*>(buffer_.data()), received, 0);
        const int error = sent == SOCKET_ERROR ? WSAGetLastError() : 0;
        log_.record_udp(name, directions[0], bytes, sent, error);
    }

    void from_upstream(const std::string& name, UdpSession& session) {
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
        log_.record_udp(name, directions[1], bytes, sent, error);
    }

    const Address destination_;
    const Socket listener_;
    TrafficLog& log_;
    std::map<std::string, UdpSession> sessions_;
    std::array<unsigned char, 65536> buffer_{};
};

struct TcpDirection {
    std::array<unsigned char, 16384> buffer{};
    std::size_t begin = 0;
    std::size_t end = 0;
    std::uint64_t offset = 0;
    bool eof = false;
    bool send_closed = false;

    bool pending() const { return begin != end; }
    bool can_read() const { return !eof && !pending(); }
};

struct TcpSession {
    TcpSession(std::uint64_t id, std::string name, Socket client, const Address& destination)
        : connection(id), client_name(std::move(name)), sockets{std::move(client),
              Socket(destination.storage.ss_family, Transport::tcp)} {
        if (connect(sockets[1].get(), destination.data(), destination.length) == SOCKET_ERROR) {
            const int error = WSAGetLastError();
            if (error != WSAEWOULDBLOCK) {
                throw network_error("connect TCP upstream", error);
            }
            connecting = true;
        }
    }

    std::uint64_t connection;
    std::string client_name;
    std::array<Socket, 2> sockets;
    std::array<TcpDirection, 2> streams;
    Clock::time_point connect_deadline = Clock::now() + std::chrono::seconds(15);
    bool connecting = false;
};

class TcpRelay {
public:
    TcpRelay(const Address& destination, const Address& local, TrafficLog& log)
        : destination_(destination), listener_(bind_listener(local, Transport::tcp)), log_(log) {
        if (listen(listener_.get(), SOMAXCONN) == SOCKET_ERROR) {
            throw network_error("listen", WSAGetLastError());
        }
        announce_listener(listener_, destination_, "TCP");
    }

    void prepare(std::vector<WSAPOLLFD>& poll) const {
        poll.push_back({listener_.get(), POLLRDNORM, 0});
        for (const auto& session : sessions_) {
            for (std::size_t index = 0; index < session.sockets.size(); ++index) {
                short events = 0;
                if (session.connecting) {
                    events = index == 1 ? POLLWRNORM : 0;
                } else {
                    if (session.streams[index].can_read()) {
                        events |= POLLRDNORM;
                    }
                    if (session.streams[1 - index].pending()) {
                        events |= POLLWRNORM;
                    }
                }
                poll.push_back({session.sockets[index].get(), events, 0});
            }
        }
    }

    void dispatch(std::span<const WSAPOLLFD> poll) {
        std::size_t index = 1;
        for (auto it = sessions_.begin(); it != sessions_.end();) {
            const std::array events{poll[index].revents, poll[index + 1].revents};
            index += 2;
            const int error = advance(*it, events);
            if (error != 0 || (it->streams[0].send_closed && it->streams[1].send_closed)) {
                log_.record_tcp(Event::tcp_close, it->connection, it->client_name, {}, 0, {}, error);
                it = sessions_.erase(it);
            } else {
                ++it;
            }
        }
        if (poll.front().revents & POLLRDNORM) {
            accept_client();
        }
    }

private:
    void accept_client() {
        Address client;
        const auto accepted = accept(listener_.get(), client.data(), &client.length);
        if (accepted == INVALID_SOCKET && WSAGetLastError() == WSAEWOULDBLOCK) {
            return;
        }
        try {
            Socket peer(accepted);
            if (sessions_.size() >= max_sessions) {
                throw network_error("accept TCP client", WSAENOBUFS);
            }
            auto& session = sessions_.emplace_back(++next_connection_, client.numeric(), std::move(peer), destination_);
            log_.record_tcp(Event::tcp_open, session.connection, session.client_name);
        } catch (const std::runtime_error& error) {
            std::cerr << error.what() << '\n';
        }
    }

    int advance(TcpSession& session, const std::array<short, 2>& events) {
        if ((events[0] | events[1]) & POLLNVAL) {
            return WSAENOTSOCK;
        }
        if (session.connecting) {
            if (!(events[1] & (POLLWRNORM | POLLERR | POLLHUP))) {
                return Clock::now() >= session.connect_deadline ? WSAETIMEDOUT : 0;
            }
            int error = 0;
            int length = sizeof(error);
            if (getsockopt(session.sockets[1].get(), SOL_SOCKET, SO_ERROR, reinterpret_cast<char*>(&error),
                           &length) == SOCKET_ERROR) {
                return WSAGetLastError();
            }
            if (error != 0) {
                return error;
            }
            session.connecting = false;
        }
        for (std::size_t index = 0; index < session.streams.size(); ++index) {
            if (const int error = transfer(session, index, events[index], events[1 - index]); error != 0) {
                return error;
            }
        }
        return 0;
    }

    int transfer(TcpSession& session, std::size_t index, short readable, short writable) {
        auto& stream = session.streams[index];
        const auto source = session.sockets[index].get();
        const auto target = session.sockets[1 - index].get();
        if (stream.pending() && (writable & (POLLWRNORM | POLLERR | POLLHUP))) {
            const auto pending = Bytes(stream.buffer).subspan(stream.begin, stream.end - stream.begin);
            const int sent = send(target, reinterpret_cast<const char*>(pending.data()), static_cast<int>(pending.size()), 0);
            if (sent == SOCKET_ERROR) {
                const int error = WSAGetLastError();
                return error == WSAEWOULDBLOCK ? 0 : error;
            }
            if (sent == 0) {
                return WSAECONNRESET;
            }
            auto sent_bytes = pending.first(static_cast<std::size_t>(sent));
            log_.record_tcp(Event::tcp_data, session.connection, session.client_name, directions[index],
                            stream.offset, sent_bytes);
            stream.begin += sent_bytes.size();
            stream.offset += sent_bytes.size();
        }
        if (stream.can_read() && (readable & (POLLRDNORM | POLLERR | POLLHUP))) {
            const int received = recv(source, reinterpret_cast<char*>(stream.buffer.data()),
                                      static_cast<int>(stream.buffer.size()), 0);
            if (received == SOCKET_ERROR) {
                const int error = WSAGetLastError();
                return error == WSAEWOULDBLOCK ? 0 : error;
            }
            stream.begin = 0;
            stream.end = static_cast<std::size_t>(received);
            stream.eof = received == 0;
        }
        if (stream.eof && !stream.pending() && !stream.send_closed) {
            if (shutdown(target, SD_SEND) == SOCKET_ERROR) {
                return WSAGetLastError();
            }
            stream.send_closed = true;
            log_.record_tcp(Event::tcp_half_close, session.connection, session.client_name, directions[index], stream.offset);
        }
        return 0;
    }

    const Address destination_;
    const Socket listener_;
    TrafficLog& log_;
    std::list<TcpSession> sessions_;
    std::uint64_t next_connection_ = 0;
};

struct Route {
    Address upstream;
    Address local;
};

std::optional<Route> make_route(std::string_view upstream, std::string_view local, std::string_view default_local,
                                Transport transport, bool redirect_hosts, std::vector<hosts::Mapping>& mappings) {
    if (upstream.empty()) {
        if (!local.empty()) {
            throw std::runtime_error("A listen address requires a matching upstream");
        }
        return std::nullopt;
    }
    const auto destination = parse_endpoint(upstream);
    const auto listener = redirect_hosts && local.empty()
        ? Endpoint{"127.0.0.1", destination.port}
        : parse_endpoint(local.empty() ? default_local : local);
    if (redirect_hosts) {
        if (listener.port != destination.port) {
            throw std::runtime_error("Hosts redirection requires the listener and upstream to use the same port");
        }
        mappings.push_back({hosts::normalize_hostname(destination.hostname), listener.hostname});
    }
    return Route{resolve(destination, false, transport), resolve(listener, true, transport)};
}

void run_relays(const std::optional<Route>& udp_route, const std::optional<Route>& tcp_route, bool trace,
                std::span<const hosts::Mapping> mappings) {
    TrafficLog log(trace);
    const HostsCleanupSignal cleanup_signal;
    std::optional<UdpRelay> udp;
    std::optional<TcpRelay> tcp;
    if (udp_route) {
        udp.emplace(udp_route->upstream, udp_route->local, log);
    }
    if (tcp_route) {
        tcp.emplace(tcp_route->upstream, tcp_route->local, log);
    }

    std::vector<WSAPOLLFD> poll;
    poll.reserve(3 * max_sessions + 2);
    std::optional<hosts::Redirect> redirect;
    if (!mappings.empty() && !stopping.load()) {
        redirect.emplace(mappings);
        redirect->announce();
    }
    while (!stopping.load()) {
        poll.clear();
        if (udp) {
            udp->prepare(poll);
        }
        const auto tcp_start = poll.size();
        if (tcp) {
            tcp->prepare(poll);
        }
        if (WSAPoll(poll.data(), static_cast<ULONG>(poll.size()), 250) == SOCKET_ERROR) {
            throw network_error("WSAPoll", WSAGetLastError());
        }
        std::span<const WSAPOLLFD> ready(poll);
        if (udp) {
            udp->dispatch(ready.first(tcp_start));
        }
        if (tcp) {
            tcp->dispatch(ready.subspan(tcp_start));
        }
    }
    if (redirect) {
        redirect->restore();
    }
}

void usage(std::ostream& stream) {
    stream << "Usage: sso-proxy [--upstream HOST:PORT [--listen 127.0.0.1:18971]]\n"
              "                 [--tcp-upstream HOST:PORT [--tcp-listen 127.0.0.1:18443]] [--trace] [--redirect-hosts]\n"
              "       sso-proxy --restore-hosts\n"
              "Provide at least one upstream. Bracket IPv6 addresses. --trace includes wire bytes in stdout JSON.\n"
              "Hosts commands require an elevated terminal. --redirect-hosts uses the upstream ports locally.\n";
}
} // namespace

int main(int argc, char** argv) {
    std::cerr.tie(nullptr);
    try {
        if (argc == 2 && std::string_view(argv[1]) == "--restore-hosts") {
            hosts::restore_system_hosts();
            return 0;
        }
        std::string_view listen;
        std::string_view upstream;
        std::string_view tcp_listen;
        std::string_view tcp_upstream;
        const std::map<std::string_view, std::string_view*> addresses = {
            {"--upstream", &upstream}, {"--listen", &listen},
            {"--tcp-upstream", &tcp_upstream}, {"--tcp-listen", &tcp_listen},
        };
        bool trace = false;
        bool redirect_hosts = false;
        for (int index = 1; index < argc; ++index) {
            const std::string_view option = argv[index];
            if (option == "--help" || option == "-h") {
                usage(std::cout);
                return 0;
            }
            if (option == "--trace") {
                trace = true;
            } else if (option == "--redirect-hosts") {
                redirect_hosts = true;
            } else if (const auto entry = addresses.find(option); entry != addresses.end() && index + 1 < argc
                       && std::string_view(argv[index + 1]).size() != 0) {
                *entry->second = argv[++index];
            } else {
                throw std::runtime_error("Invalid option or missing value: " + std::string(option));
            }
        }
        if (upstream.empty() && tcp_upstream.empty()) {
            usage(std::cerr);
            return 2;
        }

        const Winsock winsock;
        std::vector<hosts::Mapping> mappings;
        const auto udp = make_route(upstream, listen, "127.0.0.1:18971", Transport::udp, redirect_hosts, mappings);
        const auto tcp = make_route(tcp_upstream, tcp_listen, "127.0.0.1:18443", Transport::tcp, redirect_hosts, mappings);
        if (!mappings.empty()) {
            // The control handler can run during shutdown. Windows closes this event at process exit.
            hosts_cleanup_done = CreateEventW(nullptr, TRUE, FALSE, nullptr);
            if (hosts_cleanup_done == nullptr) {
                throw std::runtime_error("Could not create the hosts cleanup event");
            }
        }
        if (!SetConsoleCtrlHandler(stop_on_console_event, TRUE)) {
            throw std::runtime_error("Could not install the console shutdown handler");
        }
        run_relays(udp, tcp, trace, mappings);
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
