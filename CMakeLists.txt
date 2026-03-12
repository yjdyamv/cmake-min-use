cmake_minimum_required(VERSION 3.10.0)
project(cmake-min-use VERSION 0.1.0 LANGUAGES C CXX)

add_executable(cmake-min-use main.cpp)

add_library(hello SHARED hello.cpp)
target_link_libraries(cmake-min-use hello)

find_package(fmt REQUIRED)
target_link_libraries(cmake-min-use fmt::fmt)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

install(TARGETS "cmake-min-use" "hello"
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)
