/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#include "gtest/gtest.h"
#include "Engine.h"
#include <sstream>

TEST(EngineTest, ConstructorsAndAccessors)
{
    Engine a;
    a.setType("V6");
    a.setPower(500);
    ASSERT_EQ(a.getType(), "V6");
    ASSERT_EQ(a.getPower(), 500);

    Engine b("V8", 1000);
    ASSERT_EQ(b.getType(), "V8");
    ASSERT_EQ(b.getPower(), 1000);

    Engine c(b);
    ASSERT_EQ(c.getPower(), 1000);
}

TEST(EngineTest, OutputOperator)
{
    Engine e("V8", 1000);
    std::ostringstream ss;
    ss << e;
    std::string s = ss.str();
    ASSERT_NE(s.find("Engine("), std::string::npos);
    ASSERT_NE(s.find("1000"), std::string::npos);
}
