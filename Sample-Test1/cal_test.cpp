#include "pch.h"

#include "../Project7/cal.cpp"

TEST(CalcTest, ZegopTest) {
	int zegopResult = getZegop(3);

	EXPECT_EQ(zegopResult, 9);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
