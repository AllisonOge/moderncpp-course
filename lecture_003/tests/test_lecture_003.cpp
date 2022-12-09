# include <gtest/gtest.h>
#include <lecture_003.h>

TEST(TestLecture003, TestSum) {
    EXPECT_EQ(5, Sum(2, 3));
}