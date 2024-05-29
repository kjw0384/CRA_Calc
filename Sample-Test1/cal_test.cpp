#include "pch.h"
#include "../Project7/cal.cpp"

using namespace std;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestgetSumSum, Test1) {
	EXPECT_EQ(getSumSum(2, 1, 3), 2 + 1 + 3);
}

TEST(TestgetSumSum, Test2) {
	EXPECT_EQ(getSumSum(-2, -1, -3), -2 + -1 + -3);
}

TEST(TestgetSumSum, Test23) {
	EXPECT_EQ(getSumSum(0, 0, 0), 0);
}
