#include "pch.h"
#include "../Project7/cal.cpp"

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