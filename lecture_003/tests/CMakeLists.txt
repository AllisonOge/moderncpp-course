# add gtest source folder (provide gtests and gtest_main)
add_subdirectory(/usr/src/gtest
                ${PROJECT_BINARY_DIR}/gtest)

include(CTest)

# add executable that runs the test
add_executable(test_sum test_lecture_003.cpp)

# link the executable to the needed libraries
target_link_libraries(test_sum
                      another_lecture_003
                      gtest gtest_main)

# add gtest to be able to run test   
add_test(test_sum ${PROJECT_SOURCE_DIR}/tests/test_lecture_003)