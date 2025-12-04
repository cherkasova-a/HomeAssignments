/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#include "gtest/gtest.h"
#include <sstream>
#include "Engine.h"
#include "Gun.h"
#include "Autobot.h"

TEST(OutputTest, TransformerAndDerived)
{
    Engine e("X", 123);
    Gun g("Z", 7);
    Autobot a("AB",1,11,2,true,e,&g,"Opti",3);

    std::ostringstream ss;
    ss << e << " " << g << " " << a;
    std::string out = ss.str();
    ASSERT_NE(out.find("Engine("), std::string::npos);
    ASSERT_NE(out.find("Gun("), std::string::npos);
    ASSERT_NE(out.find("Autobot("), std::string::npos);
}
