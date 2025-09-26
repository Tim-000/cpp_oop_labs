#include <gtest/gtest.h>
#include "../src/Lb1.h"  



TEST(BracketsCheckTest, EmptyStringIsValid) {
    EXPECT_TRUE(BracketsCheck(""));
}

TEST(BracketsCheckTest, SimplePairIsValid) {
    EXPECT_TRUE(BracketsCheck("()"));
}

TEST(BracketsCheckTest, WrongOrderIsInvalid) {
    EXPECT_FALSE(BracketsCheck(")("));
}

TEST(BracketsCheckTest, SingleOpenIsInvalid) {
    EXPECT_FALSE(BracketsCheck("("));
}

TEST(BracketsCheckTest, SingleCloseIsInvalid) {
    EXPECT_FALSE(BracketsCheck(")"));
}

TEST(BracketsCheckTest, ComplexValidSequence) {
    EXPECT_TRUE(BracketsCheck("(())((())())"));
}

TEST(BracketsCheckTest, TooLongStringIsInvalid) {
    std::string longString(101, '('); 
    EXPECT_FALSE(BracketsCheck(longString));
}