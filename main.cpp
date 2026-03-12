#include <fmt/base.h>

#include <iostream>
#include <vector>

#include "hello.hpp"

int main()
{
    std::vector<int> vec = {34, 12, 65};
    print_vec_int(vec);
    std::cout << "Hello, world" << std::endl;
    fmt::println("fmt: Hello, world");
    return 0;
}