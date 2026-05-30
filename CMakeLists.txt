cmake_minimum_required(VERSION 4.1.2)
project(TestPrivateUnitTest)

# Set C++ version
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Execute src/testclass/CMakeLists.txt
add_subdirectory(src/testclass)

# Create project executable
add_executable(TestPrivateUnitTest apps/main.cpp)

# Include to project executable TestClass library defined in src/testclass/CMakeLists.txt
target_link_libraries(TestPrivateUnitTest PRIVATE TestClass)

# Execute tests/CMakeLists.txt
add_subdirectory(tests)