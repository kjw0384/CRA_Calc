#include "pch.h"
#include "../Project7/cal.cpp"

TEST(CalTestSuite, GobTest) {
	EXPECT_EQ(getGop(3, 4), 12);
  
}