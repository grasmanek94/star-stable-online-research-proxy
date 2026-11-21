#pragma once

#include <filesystem>
#include <span>
#include <string>
#include <string_view>

namespace hosts {

struct Mapping {
    std::string hostname;
    std::string loopback;
};

std::string normalize_hostname(std::string_view value);

class File {
public:
    explicit File(std::filesystem::path path);
    void install(std::span<const Mapping> mappings, std::string_view owner) const;
    bool restore(std::string_view owner = {}) const;

private:
    std::filesystem::path path_;
};

class Redirect {
public:
    explicit Redirect(std::span<const Mapping> mappings);
    Redirect(File file, std::span<const Mapping> mappings);
    ~Redirect();
    Redirect(const Redirect&) = delete;
    Redirect& operator=(const Redirect&) = delete;

    void announce() const;
    void restore();

private:
    const File file_;
    const std::string owner_;
    bool flush_system_dns_ = false;
    bool active_ = true;
};

void restore_system_hosts();

} // namespace hosts
