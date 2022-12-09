project(cmake_test_example)
cmake_minimum_required(VERSION 3.0)

# location of headers directories
include_directories(${PROJECT_SOURCE_DIR}/src)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)

enable_testing() # must be enabled at the top-most level CMakeLists.txt file