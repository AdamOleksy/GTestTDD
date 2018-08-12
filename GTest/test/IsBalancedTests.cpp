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

TEST_F(IsBalancedTests, testTwoCharsTrue)
{
    IsBalanced ib;
    EXPECT_EQ(ib.IsItBalanced("()"), true);
}

TEST_F(IsBalancedTests, testAnotherTwoCharsTrue)
{
    IsBalanced ib;
    EXPECT_EQ(ib.IsItBalanced("[]"), true);
}

TEST_F(IsBalancedTests, testBalancedFour)
{
    IsBalanced ib;
    EXPECT_EQ(ib.IsItBalanced("{[]}"), true);
    EXPECT_EQ(ib.IsItBalanced("{{}}"), true);
    EXPECT_EQ(ib.IsItBalanced("[[]]"), true);
    EXPECT_EQ(ib.IsItBalanced("[{}]"), true);
    EXPECT_EQ(ib.IsItBalanced("{()}"), true);
    EXPECT_EQ(ib.IsItBalanced("()()"), true);
    EXPECT_EQ(ib.IsItBalanced("(())"), true);
}

TEST_F(IsBalancedTests, testNotbalancedFour)
{
    IsBalanced ib;
    EXPECT_EQ(ib.IsItBalanced("{[}]"), false);
    EXPECT_EQ(ib.IsItBalanced("{)(}"), false);
    EXPECT_EQ(ib.IsItBalanced("(}{)"), false);
    EXPECT_EQ(ib.IsItBalanced("{]{]"), false);
}

TEST_F(IsBalancedTests, testBalancedSix)
{
    IsBalanced ib;
    EXPECT_EQ(ib.IsItBalanced("{}[][]"), true);
    EXPECT_EQ(ib.IsItBalanced("[{()}]"), true);
    EXPECT_EQ(ib.IsItBalanced("[[{}]]"), true);
    EXPECT_EQ(ib.IsItBalanced("(){[]}"), true);
}
