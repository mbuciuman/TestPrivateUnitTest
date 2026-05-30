# Create the library target, make library with all of these source files
add_library(TestClass TestClass.cpp)

# If linking to this library this is where will find library's header files
target_include_directories(TestClass PUBLIC "${PROJECT_SOURCE_DIR}/include/testclass")

# Below is to link GoogleTest to the library we just created above
# START: Default GTest Code - have to include this as we use gtest/gtest_prod.h for FRIEND_TEST
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Include TestClass library so we can resolve symbols
target_link_libraries(
        TestClass
        GTest::gtest_main
)
# END: Default GTest Code
