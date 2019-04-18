#include <hello/hello.h>
#include <fmt/format.h>

namespace hello {

void goodMorning(const std::string& name) {
    using namespace fmt::literals;
    fmt::print("Good morning {}!\n", name);
}

}
