#include "maths.h"
#include <gtest/gtest.h>

TEST(MathsTest, AdditionTest){
    EXPECT_EQ(add(0,0), 0);
    EXPECT_EQ(add(1,0), 1);
    EXPECT_EQ(add(100, -25), 75);
    EXPECT_EQ(add(100, -200), -100);
}

TEST(MathsTest, SubtractionTest) {
  EXPECT_EQ(subtract(0, 0), 0);
  EXPECT_EQ(subtract(100, 200), -100);
  EXPECT_EQ(subtract(100, 100), 0);
  EXPECT_EQ(subtract(200, 100), 100);
}

TEST(MathsTest, MultiplicationTest) {
  EXPECT_EQ(multiply(0, 100), 0);
  EXPECT_EQ(multiply(100, 0), 0);
  EXPECT_EQ(multiply(1, 100), 100);
  EXPECT_EQ(multiply(200, 3), 600);
}

TEST(MathsTest, DivisionTest) {
  EXPECT_EQ(divide(0, 100), 0);
  EXPECT_EQ(divide(100, 100), 1);
  EXPECT_EQ(divide(200, 2), 100);
}

