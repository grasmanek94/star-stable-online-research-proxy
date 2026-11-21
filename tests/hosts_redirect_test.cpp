#include "hosts_redirect.h"

#include <array>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <string_view>

namespace {
void check(bool condition, const char* description) {
    if (!condition) {
        throw std::runtime_error(description);
    }
}

std::string read(const std::filesystem::path& path) {
    const std::ifstream::openmode mode = std::ios::binary;
    std::ifstream source(path, mode);
    check(source.is_open(), "Could not read the hosts fixture");
    return {std::istreambuf_iterator<char>(source), {}};
}

void write(const std::filesystem::path& path, std::string_view contents) {
    std::ofstream target(path, std::ios::binary | std::ios::trunc);
    target << contents;
    target.close();
    check(target.good(), "Could not write the hosts fixture");
}

template <typename Call>
void expect_error(Call call) {
    try {
        call();
    } catch (const std::runtime_error&) {
        return;
    }
    throw std::runtime_error("An invalid hosts edit succeeded");
}

void run(const std::filesystem::path& path) {
    const hosts::File file(path);
    const std::array entries{
        hosts::Mapping{"Playtest.Example.", "127.0.0.1"},
        hosts::Mapping{"playtest.example", "127.0.0.1"},
        hosts::Mapping{"game.example", "::1"},
    };
    constexpr std::array<std::string_view, 5> originals{
        "", "\xef\xbb\xbf", "# Sample\r\n", "# Sample\n192.0.2.5 unrelated.example\n", "# Original without final newline"
    };
    for (const auto before : originals) {
        write(path, before);
        {
            const hosts::Redirect redirect(file, entries);
            const auto modified = read(path);
            check(modified.starts_with(before), "Installation changed existing bytes");
            check(modified.find("127.0.0.1\tplaytest.example\t# SSO-Proxy-hosts-v1 ") != modified.npos,
                  "IPv4 hostname was not installed");
            check(modified.find("::1\tgame.example\t# SSO-Proxy-hosts-v1 ") != modified.npos,
                  "IPv6 hostname was not installed");
            check(modified.find("playtest.example", modified.find("playtest.example") + 1) == modified.npos,
                  "Duplicate hostnames were installed");
            expect_error([&] { file.install(entries, "99-1"); });
            check(read(path) == modified, "A competing redirect changed the active mappings");
        }
        check(read(path) == before && !file.restore(), "Scope exit did not restore the original bytes");
    }

    constexpr std::string_view base = "# Original without final newline";
    write(path, base);
    file.install(entries, "1-1");
    const auto modified = read(path);
    const auto second_entry = modified.find("127.0.0.1\t");
    check(second_entry != modified.npos, "Missing managed IPv4 entry");
    constexpr std::string_view added = "192.0.2.30\tnew.example\r\n";
    write(path, modified.substr(0, second_entry) + std::string(added) + modified.substr(second_entry) + "# New comment\n");
    check(!file.restore("2-1"), "A different owner removed managed entries");
    check(file.restore(), "Manual restoration did not remove the managed entries");
    check(read(path) == std::string(base) + "\r\n" + std::string(added) + "# New comment\n",
          "Restoration removed another program's edits");

    constexpr std::string_view existing = "\xef\xbb\xbf" "192.0.2.1\tother.example PLAYTEST.EXAMPLE. # Keep\r\n";
    write(path, existing);
    expect_error([&] { file.install(entries, "1-1"); });
    check(read(path) == existing, "A conflicting alias was overwritten");
    for (const auto invalid : {"192.0.2.4", "::1", "bad..example", "bad name.example", "-bad.example", "x\n.test"}) {
        expect_error([&] { hosts::normalize_hostname(invalid); });
    }

    write(path, "# Local edit\n");
    {
        hosts::Redirect old(file, entries);
        check(file.restore(), "Manual restoration during a running session failed");
        file.install(entries, "3-1");
    }
    check(read(path).find("3-1") != std::string::npos, "Closing an older relay removed a newer redirect");
    check(file.restore() && read(path) == "# Local edit\n", "Manual restore was not repeatable");
    std::filesystem::remove(path);
}
} // namespace

int main(int argc, char** argv) {
    try {
        check(argc == 2, "A temporary hosts fixture path is required");
        run(argv[1]);
        std::cout << "Hosts installation, scope exit, manual recovery and edit preservation passed.\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
