#include "TestRuleOnCode.h"
#include "rules/custom/HdwTestRuleRule.cpp"

TEST(HdwTestRuleRuleTest, PropertyTest)
{
    HdwTestRuleRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("hdw test rule", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(HdwTestRuleRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
