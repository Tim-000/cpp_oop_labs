cmake_minimum_required(VERSION 3.10) 
project(Lab1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.0
  TLS_VERIFY false
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(bracket_checker Lab1/src/main.cpp Lab1/src/Laba1.cpp)

add_executable(tests Lab1/test/tests.cpp Lab1/src/Laba1.cpp)

target_link_libraries(tests gtest_main)

enable_testing()
add_test(NAME Lab1_Tests COMMAND tests)
