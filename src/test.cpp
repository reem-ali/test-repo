#include "../header/circle.hpp"

#include "gtest/gtest.h"

TEST(AreaTests, ZeroRadius) {
	Circle cZero(0.0);
	double areaZero = cZero.area();
	EXPECT_DOUBLE_EQ(0.0, areaZero);
}

TEST(AreaTests, PositiveRadius) {
	Circle cPos(10.0);
	double areaPositive = cPos.area();
	//EXPECT_DOUBLE_EQ(314.15926, areaPositive);
	EXPECT_NEAR(314.15926, areaPositive, 0.0001);
 }

TEST(AreaTests, NegativeRadius) {
	Circle cNeg(-10.0);
	double areaNegative = cNeg.area();
	EXPECT_DOUBLE_EQ(0.0, areaNegative);
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
