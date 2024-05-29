#include "pch.h"
#include "../Project7/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestMinus, resultPositive) {
	
	int ret = getMinus(10, 5);
	int exp = 5;

	EXPECT_EQ(ret, exp);
}

TEST(TestMinus, resultNegative) {

	int ret = getMinus(3, 5);
	int exp = -2;

	EXPECT_EQ(ret, exp);
}

TEST(TestMinus, resultzero) {

	int ret = getMinus(7, 7);
	int exp = 0;

	EXPECT_EQ(ret, exp);
}