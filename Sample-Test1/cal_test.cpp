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

TEST(calcTest, AllPositiveGetSum) {
	/* Arrange */
	int a = 2, b = 3;
	int expected = 5;

	/* Act */
	int actual = getSum(a, b);

	/* Assert */
	EXPECT_EQ(expected, actual);
}

TEST(calcTest, AllNegativeGetSum) {
	/* Arrange */
	int a = -2, b = -3;
	int expected = -5;

	/* Act */
	int actual = getSum(a, b);

	/* Assert */
	EXPECT_EQ(expected, actual);
}

TEST(calcTest, AllZeroGetSum) {
	/* Arrange */
	int a = 0, b = 0;
	int expected = 0;

	/* Act */
	int actual = getSum(a, b);

	/* Assert */
	EXPECT_EQ(expected, actual);
}

TEST(calcTest, MixGetSum) {
	/* Arrange */
	int a = 2, b = -3;
	int expected = -1;

	/* Act */
	int actual = getSum(a, b);

	/* Assert */
	EXPECT_EQ(expected, actual);
}

TEST(CalTestSuite, GobTest) {
	EXPECT_EQ(getGop(3, 4), 12);
  
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

