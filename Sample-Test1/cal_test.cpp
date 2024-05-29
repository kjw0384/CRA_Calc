#include "pch.h"
#include "../Project7/cal.cpp"

TEST(Calc, TestDivide) {
	EXPECT_EQ(2, getDivide(2, 1));
}

TEST(Calc, TestDivide2) {
	EXPECT_THROW(getDivide(10, 0), std::runtime_error);
}