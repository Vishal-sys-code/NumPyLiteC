# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(NumpyCImplementation)

# Set the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add source files
set(SOURCE_FILES
    src/array.c
    src/operations.c
    src/utils.c
)

# Add test files
set(TEST_FILES
    tests/test_array.c
    tests/test_operations.c
    tests/test_utils.c
)

# Add the executable for test_array
add_executable(test_array ${SOURCE_FILES} tests/test_array.c)

# Add the executable for test_operations
add_executable(test_operations ${SOURCE_FILES} tests/test_operations.c)

# Add the executable for test_utils
add_executable(test_utils ${SOURCE_FILES} tests/test_utils.c)

# Enable testing
enable_testing()

# Add test cases
add_test(NAME TestArray COMMAND test_array)
add_test(NAME TestOperations COMMAND test_operations)
add_test(NAME TestUtils COMMAND test_utils)
