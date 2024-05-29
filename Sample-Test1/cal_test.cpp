#include "pch.h"
#include "../Project7/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(CalTestSuite, SumSumTestPlus) {
	EXPECT_EQ(getSumSum(2, 1, 3), 2 + 1 + 3);
}

TEST(CalTestSuite, SumSumTestMinus) {
	EXPECT_EQ(getSumSum(-2, -1, -3), -2 + -1 + -3);
}

TEST(CalTestSuite, SumSumTestZero) {
	EXPECT_EQ(getSumSum(0, 0, 0), 0);
}

TEST(CalTestSuite, SumSumTestMix) {
	EXPECT_EQ(getSumSum(5, -1, 2), 6);
}
