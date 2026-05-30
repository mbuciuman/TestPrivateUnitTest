cmake_minimum_required(VERSION 4.3)
project(TestPrivateUnitTest)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src/testclass)

add_executable(TestPrivateUnitTest apps/main.cpp)
target_link_libraries(TestPrivateUnitTest PRIVATE TestClass)

add_subdirectory(tests)