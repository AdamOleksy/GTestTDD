#include "gtest/gtest.h"

struct IsBalancedTests : public ::testing::Test
{

};

TEST_F(IsBalancedTests, assertThatFalseIsTrue)
{
    ASSERT_TRUE(false);
}


