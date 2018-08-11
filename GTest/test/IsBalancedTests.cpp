#include "gtest/gtest.h"
#include "../inc/IsBalanced.hpp"

struct IsBalancedTests : public ::testing::Test
{

};

TEST_F(IsBalancedTests, assertThatFalseIsTrue)
{
    ASSERT_TRUE(true);
}

TEST_F(IsBalancedTests, testOneChar)
{
    IsBalanced ib;
    EXPECT_EQ(ib.IsItBalanced(")"), false);
}

