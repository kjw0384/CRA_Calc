#include "pch.h"
#include "../Project7/cal.cpp"

TEST(Calc, TestDivide) {
	EXPECT_EQ(2, getDivide(2, 1));
}

TEST(Calc, TestDivide2) {
	EXPECT_THROW(getDivide(10, 0), std::runtime_error);
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
