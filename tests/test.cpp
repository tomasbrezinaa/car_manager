#include <gtest/gtest.h>

TEST(mojtest, prvytest)
{
    EXPECT_EQ(5+5, 10);
    EXPECT_TRUE(true);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
