#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
using namespace std;
#include "op.hpp"
#include "rand.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"

TEST(OpTest, OpEvaluateNonZero) 
{
    Op* test = new Op(6.0);
    EXPECT_EQ(test->evaluate(), 6.0);
}

TEST(OpTest, Stringify)
{
 
    Op* test = new Op(6.0);
    EXPECT_EQ(test->stringify(), "6");

}
TEST(RandTest, RandCheck)
{
    Rand* test = new Rand();
    EXPECT_TRUE(test->evaluate() >= 0 && test->evaluate() <= 100);
}

TEST(MultTest, evaluationTest)
{
    Op* ten = new Op(10);
    Op* two = new Op(2);
    Mult* test = new Mult(ten, two);
    EXPECT_EQ(test->evaluate(), 20);
}
TEST(DivTest, evaluationTest)
{
    Op* ten = new Op(10);
    Op* two = new Op(2);
    Div* test = new Div(ten, two);
    EXPECT_EQ(test->evaluate(), 5);
}
TEST(AddTest, evaluationTest)
{
    Op* ten = new Op(10);
    Op* two = new Op(2);
    Add* test = new Add(ten, two);
    EXPECT_EQ(test->evaluate(), 12);
}
TEST(SubTest, evaluationTest)
{
    Op* ten = new Op(10);
    Op* two = new Op(2);
    Sub* test = new Sub(ten, two);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(PowTest, evaluationTest)
{
    Op* ten = new Op(10);
    Pow* test = new Pow(ten);
    EXPECT_EQ(test->evaluate(), 100);
}

#endif //__OP_TEST_HPP__
