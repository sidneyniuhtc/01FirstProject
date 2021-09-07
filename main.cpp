#include <gtest/gtest.h>

int Add(int x, int y) 
{
	return x + y;
}

TEST(TestAdd, NormalInputs) {
	EXPECT_EQ(Add(0, 1), 1);
	EXPECT_EQ(Add(2, 3), 5);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	auto res = RUN_ALL_TESTS();
}
