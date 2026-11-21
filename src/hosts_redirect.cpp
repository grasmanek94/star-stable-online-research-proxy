#include "hosts_redirect.h"

#include <windows.h>

#include <array>
#include <atomic>
#include <cstdint>
#include <iostream>
#include <map>
#include <memory>
#include <stdexcept>
#include <system_error>
#include <utility>
#include <vector>

namespace hosts {
namespace {
constexpr std::string_view marker = "SSO-Proxy-hosts-v1";
constexpr std::string_view utf8_bom = "\xef\xbb\xbf";
constexpr std::uint64_t max_hosts_size = 4 * 1024 * 1024;

struct CloseHandleOnExit {
    void operator()(HANDLE handle) const noexcept {
        if (handle != INVALID_HANDLE_VALUE) {
            CloseHandle(handle);
        }
    }
};
using Handle = std::unique_ptr<void, CloseHandleOnExit>;

std::system_error windows_error(DWORD code, const std::string& operation) {
    return std::system_error(static_cast<int>(code), std::system_category(), operation);
}

std::string unique_id() {
    static std::atomic_uint sequence = 0;
    FILETIME time{};
    GetSystemTimeAsFileTime(&time);
    const auto ticks = (static_cast<std::uint64_t>(time.dwHighDateTime) << 32) | time.dwLowDateTime;
    return std::to_string(GetCurrentProcessId()) + "-" + std::to_string(ticks) + "-" + std::to_string(++sequence);
}

std::filesystem::path system_directory() {
    std::array<wchar_t, MAX_PATH> buffer{};
    const auto size = GetSystemDirectoryW(buffer.data(), static_cast<UINT>(buffer.size()));
    if (size == 0 || size >= buffer.size()) {
        throw std::runtime_error("Could not locate the Windows system directory");
    }
    return std::filesystem::path(buffer.data());
}

File system_hosts() {
    return File(system_directory() / L"drivers" / L"etc" / L"hosts");
}

bool flush_dns_cache() {
    const auto ipconfig = system_directory() / L"ipconfig.exe";
    auto command_line = L"\"" + ipconfig.native() + L"\" /flushdns";
    STARTUPINFOW startup{};
    startup.cb = sizeof(startup);
    PROCESS_INFORMATION process{};
    if (!CreateProcessW(ipconfig.c_str(), command_line.data(), nullptr, nullptr, FALSE, CREATE_NO_WINDOW,
                        nullptr, nullptr, &startup, &process)) {
        return false;
    }
    const Handle program(process.hProcess);
    const Handle thread(process.hThread);
    DWORD exit_code = 1;
    return WaitForSingleObject(program.get(), 1500) == WAIT_OBJECT_0
        && GetExitCodeProcess(program.get(), &exit_code) && exit_code == 0;
}

void report_change(std::string_view message) {
    const bool flushed = flush_dns_cache();
    std::cerr << message << '\n';
    if (!flushed) {
        std::cerr << "Could not flush the Windows DNS cache. Run ipconfig /flushdns in an elevated terminal.\n";
    }
}

class EditLock {
public:
    EditLock() : mutex_(CreateMutexW(nullptr, FALSE, L"Global\\SSOProxy.HostsFile")) {
        if (!mutex_) {
            throw windows_error(GetLastError(), "Open the SSO Proxy hosts edit lock");
        }
        const DWORD result = WaitForSingleObject(mutex_.get(), 1500);
        if (result == WAIT_TIMEOUT) {
            throw std::runtime_error("Another SSO Proxy hosts edit is in progress. Retry the command.");
        }
        if (result != WAIT_OBJECT_0 && result != WAIT_ABANDONED) {
            throw windows_error(GetLastError(), "Acquire the SSO Proxy hosts edit lock");
        }
    }

    ~EditLock() { ReleaseMutex(mutex_.get()); }

private:
    const Handle mutex_;
};

Handle open_hosts(const std::filesystem::path& path) {
    // Deny ordinary writers during the read/replace. Share deletion for ReplaceFileW.
    Handle file(CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_DELETE, nullptr, OPEN_EXISTING,
                            FILE_FLAG_OPEN_REPARSE_POINT, nullptr));
    if (file.get() == INVALID_HANDLE_VALUE) {
        throw windows_error(GetLastError(), "Open the Windows hosts file");
    }
    return file;
}

BY_HANDLE_FILE_INFORMATION identify(HANDLE file) {
    BY_HANDLE_FILE_INFORMATION info{};
    if (!GetFileInformationByHandle(file, &info)) {
        throw windows_error(GetLastError(), "Inspect the Windows hosts file");
    }
    if (info.dwFileAttributes & (FILE_ATTRIBUTE_REPARSE_POINT | FILE_ATTRIBUTE_DIRECTORY)) {
        throw std::runtime_error("The Windows hosts path must identify a regular file");
    }
    return info;
}

std::string read_hosts(HANDLE file, const BY_HANDLE_FILE_INFORMATION& info) {
    const auto size = (static_cast<std::uint64_t>(info.nFileSizeHigh) << 32) | info.nFileSizeLow;
    if (size > max_hosts_size) {
        throw std::runtime_error("The Windows hosts file exceeds the supported 4 MiB size");
    }
    std::string text(static_cast<std::size_t>(size), '\0');
    DWORD read = 0;
    if (!ReadFile(file, text.data(), static_cast<DWORD>(size), &read, nullptr)) {
        throw windows_error(GetLastError(), "Read the Windows hosts file");
    }
    if (read != size) {
        throw std::runtime_error("The Windows hosts file changed while being read");
    }
    if (text.find('\0') != std::string::npos) {
        throw std::runtime_error("The Windows hosts file uses an unsupported encoding");
    }
    return text;
}

void write_replacement(const std::filesystem::path& path, const std::filesystem::path& temporary,
                       const BY_HANDLE_FILE_INFORMATION& original, std::string_view updated) {
    const auto backup = std::filesystem::path(temporary.native() + L".saved");
    Handle file(CreateFileW(temporary.c_str(), GENERIC_WRITE, 0, nullptr, CREATE_NEW,
                            FILE_ATTRIBUTE_NORMAL, nullptr));
    if (file.get() == INVALID_HANDLE_VALUE) {
        const DWORD error = GetLastError();
        if (error == ERROR_ACCESS_DENIED) {
            throw windows_error(error, "Changing the Windows hosts file requires an elevated terminal");
        }
        throw windows_error(error, "Create a replacement for the Windows hosts file");
    }
    struct TemporaryCleanup {
        const std::filesystem::path& path;
        Handle& handle;
        ~TemporaryCleanup() {
            handle.reset();
            DeleteFileW(path.c_str());
        }
    } cleanup{temporary, file};
    DWORD written = 0;
    if (!WriteFile(file.get(), updated.data(), static_cast<DWORD>(updated.size()), &written, nullptr)
        || !FlushFileBuffers(file.get())) {
        throw windows_error(GetLastError(), "Save the replacement for the Windows hosts file");
    }
    if (written != updated.size()) {
        throw std::runtime_error("The Windows hosts replacement was only partially written");
    }
    file.reset();

    const auto current = identify(open_hosts(path).get());
    if (current.dwVolumeSerialNumber != original.dwVolumeSerialNumber
        || current.nFileIndexHigh != original.nFileIndexHigh || current.nFileIndexLow != original.nFileIndexLow) {
        throw std::runtime_error("Another program replaced the Windows hosts file. Retry the command.");
    }
    if (!ReplaceFileW(path.c_str(), temporary.c_str(), backup.c_str(), 0, nullptr, nullptr)) {
        const DWORD error = GetLastError();
        if (error == ERROR_UNABLE_TO_MOVE_REPLACEMENT_2
            && !MoveFileExW(backup.c_str(), path.c_str(), MOVEFILE_WRITE_THROUGH)) {
            throw windows_error(error, "Replace the Windows hosts file. Previous contents are at " + backup.string());
        }
        throw windows_error(error, "Replace the Windows hosts file");
    }
    if (!DeleteFileW(backup.c_str())) {
        std::cerr << "Could not remove the temporary hosts backup " << backup.string() << '\n';
    }
}

template <typename Edit>
bool update_file(const std::filesystem::path& path, Edit edit) {
    const EditLock lock;
    const auto source = open_hosts(path);
    const auto identity = identify(source.get());
    const auto before = read_hosts(source.get(), identity);
    const auto after = edit(before);
    if (before == after) {
        return false;
    }
    if (after.size() > max_hosts_size) {
        throw std::runtime_error("The updated Windows hosts file would exceed 4 MiB");
    }
    auto temporary = path;
    temporary += ".sso-proxy-" + unique_id() + ".tmp";
    write_replacement(path, temporary, identity, after);
    return true;
}

std::string canonical(std::string_view name) {
    if (name.ends_with('.')) {
        name.remove_suffix(1);
    }
    std::string result(name);
    for (char& ch : result) {
        if (ch >= 'A' && ch <= 'Z') {
            ch += 'a' - 'A';
        }
    }
    return result;
}

bool is_loopback(std::string_view value) {
    return value == "127.0.0.1" || value == "::1";
}

bool valid_owner(std::string_view value) {
    return !value.empty() && value.size() <= 64 && value.find_first_not_of("0123456789-") == value.npos;
}

std::vector<std::string_view> words(std::string_view value) {
    constexpr std::string_view whitespace = " \t\r";
    std::vector<std::string_view> tokens;
    while (true) {
        const auto start = value.find_first_not_of(whitespace);
        if (start == value.npos) {
            return tokens;
        }
        value.remove_prefix(start);
        const auto end = value.find_first_of(whitespace);
        tokens.push_back(value.substr(0, end));
        if (end == value.npos) {
            return tokens;
        }
        value.remove_prefix(end);
    }
}

struct Line {
    std::string_view bytes;
    std::vector<std::string_view> fields;
    std::string_view owner;
    bool added_newline = false;
};

std::vector<Line> parse_lines(std::string_view text) {
    if (text.starts_with(utf8_bom)) {
        text.remove_prefix(utf8_bom.size());
    }
    std::vector<Line> lines;
    while (!text.empty()) {
        const auto newline = text.find('\n');
        const auto line = text.substr(0, newline);
        const auto size = newline == text.npos ? text.size() : newline + 1;
        const auto hash = line.find('#');
        Line parsed{text.substr(0, size), words(line.substr(0, hash)), {}};
        if (hash != line.npos && parsed.fields.size() == 2 && is_loopback(parsed.fields[0])) {
            const auto comment = words(line.substr(hash + 1));
            if (comment.size() == 3 && comment[0] == marker && valid_owner(comment[1])
                && (comment[2] == "entry" || comment[2] == "added-newline")) {
                parsed.owner = comment[1];
                parsed.added_newline = comment[2] == "added-newline";
            }
        }
        lines.push_back(std::move(parsed));
        text.remove_prefix(size);
    }
    return lines;
}

std::string append_mappings(std::string_view text, std::span<const Mapping> mappings, std::string_view owner) {
    if (mappings.empty() || !valid_owner(owner)) {
        throw std::runtime_error("The hosts redirect requires at least one mapping and an owner");
    }
    std::map<std::string, std::string_view> entries;
    for (const auto& mapping : mappings) {
        if (!is_loopback(mapping.loopback)) {
            throw std::runtime_error("The hosts redirect requires a loopback listener");
        }
        const auto [position, inserted] = entries.try_emplace(normalize_hostname(mapping.hostname), mapping.loopback);
        if (!inserted && position->second != mapping.loopback) {
            throw std::runtime_error("The same hostname must use the same loopback address on both listeners");
        }
    }
    for (const auto& line : parse_lines(text)) {
        if (!line.owner.empty()) {
            throw std::runtime_error("An SSO Proxy hosts redirect is already installed. Run --restore-hosts first.");
        }
        for (std::size_t index = 1; index < line.fields.size(); ++index) {
            if (entries.contains(canonical(line.fields[index]))) {
                throw std::runtime_error("The Windows hosts file already maps " + std::string(line.fields[index]));
            }
        }
    }

    std::string result(text);
    bool added_newline = !text.empty() && text != utf8_bom && !text.ends_with('\n');
    if (added_newline) {
        result += "\r\n";
    }
    for (const auto& [name, loopback] : entries) {
        result.append(loopback).append("\t").append(name).append("\t# ").append(marker).append(" ").append(owner)
            .append(added_newline ? " added-newline\r\n" : " entry\r\n");
        added_newline = false;
    }
    return result;
}

std::string strip_mappings(std::string_view text, std::string_view owner) {
    const auto lines = parse_lines(text);
    const auto remove = [owner](const Line& line) {
        return !line.owner.empty() && (owner.empty() || owner == line.owner);
    };
    std::size_t last_preserved = 0;
    for (std::size_t index = 0; index < lines.size(); ++index) {
        if (!remove(lines[index])) {
            last_preserved = index + 1;
        }
    }
    std::string result(text.starts_with(utf8_bom) ? utf8_bom : std::string_view{});
    for (std::size_t index = 0; index < lines.size(); ++index) {
        const auto& line = lines[index];
        if (!remove(line)) {
            result.append(line.bytes);
        } else if (line.added_newline && index >= last_preserved && result.ends_with("\r\n")) {
            result.resize(result.size() - 2);
        }
    }
    return result;
}
} // namespace

std::string normalize_hostname(std::string_view value) {
    const auto name = canonical(value);
    if (name.empty() || name.size() > 253 || name.find_first_not_of("abcdefghijklmnopqrstuvwxyz0123456789-.") != name.npos
        || name.find_first_of("abcdefghijklmnopqrstuvwxyz") == name.npos) {
        throw std::runtime_error("Hosts redirection requires a DNS hostname in each configured upstream");
    }
    std::string_view labels(name);
    while (true) {
        const auto separator = labels.find('.');
        const auto label = labels.substr(0, separator);
        if (label.empty() || label.size() > 63 || label.front() == '-' || label.back() == '-') {
            throw std::runtime_error("Hosts redirection requires a valid DNS hostname");
        }
        if (separator == labels.npos) {
            return name;
        }
        labels.remove_prefix(separator + 1);
    }
}

File::File(std::filesystem::path path) : path_(std::move(path)) {}

void File::install(std::span<const Mapping> mappings, std::string_view owner) const {
    update_file(path_, [mappings, owner](std::string_view text) { return append_mappings(text, mappings, owner); });
}

bool File::restore(std::string_view owner) const {
    return update_file(path_, [owner](std::string_view text) { return strip_mappings(text, owner); });
}

Redirect::Redirect(std::span<const Mapping> mappings) : Redirect(system_hosts(), mappings) {
    flush_system_dns_ = true;
}

Redirect::Redirect(File file, std::span<const Mapping> mappings) : file_(std::move(file)), owner_(unique_id()) {
    file_.install(mappings, owner_);
}

Redirect::~Redirect() {
    try {
        restore();
    } catch (const std::exception& error) {
        std::cerr << error.what() << "\nRun sso-proxy --restore-hosts in an elevated terminal.\n";
    }
}

void Redirect::restore() {
    if (active_) {
        const bool changed = file_.restore(owner_);
        active_ = false;
        if (changed && flush_system_dns_) {
            report_change("Restored the Windows hosts file.");
        }
    }
}

void restore_system_hosts() {
    if (system_hosts().restore()) {
        report_change("Restored the Windows hosts file. Running relays will stay open.");
    } else {
        std::cerr << "No SSO Proxy hosts entries found.\n";
    }
}

void Redirect::announce() const {
    if (flush_system_dns_) {
        report_change("Windows hosts redirect applied. Run sso-proxy --restore-hosts in another elevated terminal to undo it.");
    }
}

} // namespace hosts
