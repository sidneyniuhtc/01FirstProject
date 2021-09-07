#include <gtest/gtest.h>

int Add(int x, int y) 
{
	return x + y;
}

TEST(AddTest, Negative) {
	// This test is named "Negative", and belongs to the "FactorialTest"
	// test case.
	EXPECT_EQ(1, Add(0, 1));
	EXPECT_EQ(5, Add(2, 3));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	auto res = RUN_ALL_TESTS();
}
