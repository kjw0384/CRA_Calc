#include "pch.h"
#include "../Project7/cal.cpp"

using namespace std;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestgetSumSum, TestPlus) {
	EXPECT_EQ(getSumSum(2, 1, 3), 2 + 1 + 3);
}

TEST(TestgetSumSum, TestMinus) {
	EXPECT_EQ(getSumSum(-2, -1, -3), -2 + -1 + -3);
}

TEST(TestgetSumSum, TestZero) {
	EXPECT_EQ(getSumSum(0, 0, 0), 0);
}

TEST(TestgetSumSum, TestMix) {
	EXPECT_EQ(getSumSum(5, -1, 2), 6);
}
