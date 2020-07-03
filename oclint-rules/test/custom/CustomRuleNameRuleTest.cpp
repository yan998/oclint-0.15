#include "TestRuleOnCode.h"
#include "rules/custom/CustomRuleNameRule.cpp"

TEST(CustomRuleNameRuleTest, PropertyTest)
{
    CustomRuleNameRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("custom rule name", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(CustomRuleNameRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
