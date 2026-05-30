# Create the library target
add_library(TestClass TestClass.cpp)

# Tell anyone linking to this library where to find its header files
target_include_directories(TestClass PUBLIC "${PROJECT_SOURCE_DIR}/include")