cmake_minimum_required(VERSION 3.10)

set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)
set(CMAKE_SH "CMAKE_SH-NOTFOUND")

project(SmartLockSim)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(include)

add_executable(lock_tests tests/DoorTest.cpp)
target_link_libraries(lock_tests gtest_main gmock_main)