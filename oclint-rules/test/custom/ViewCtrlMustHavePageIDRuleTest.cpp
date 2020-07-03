#include "TestRuleOnCode.h"
#include "rules/custom/ViewCtrlMustHavePageIDRule.cpp"

TEST(ViewCtrlMustHavePageIDRuleTest, PropertyTest)
{
    ViewCtrlMustHavePageIDRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("view ctrl must have page i d", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(ViewCtrlMustHavePageIDRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
