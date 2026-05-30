# NOTE: This unit test module can only be loaded by the root project module as it needs the TestClass library source code
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# START: Default GTest Code
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
# END: Default GTest Code

# Create executable for unit tests
add_executable(
        TestClass_Test
        testclass/TestClass_Test.cpp
)
# Include TestClass library so we can resolve symbols
target_link_libraries(
        TestClass_Test
        GTest::gtest_main
        TestClass
)

# More default GTest code
include(GoogleTest)
gtest_discover_tests(TestClass_Test)