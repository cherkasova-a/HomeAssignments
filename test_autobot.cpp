/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#include "gtest/gtest.h"
#include "Autobot.h"

TEST(AutobotTest, CtorsAndMethods)
{
    Engine eng("E", 100);
    Gun gun("G", 5);
    Autobot a("A", 1, 10, 5, true, eng, &gun, "Optimus", 20);
    ASSERT_EQ(a.getName(), "A");
    a.setAlly("Ironhide");
    ASSERT_EQ(a.getAlly(), "Ironhide");

    ASSERT_TRUE(a.Move());
    ASSERT_TRUE(a.Fire());
    ASSERT_TRUE(a.Transform());
}

TEST(AutobotTest, CopyCtor)
{
    Engine eng("E", 100);
    Gun gun("G", 5);
    Autobot a("A",1,10,5,true,eng,&gun,"Opti",5);
    Autobot b(a);
    ASSERT_EQ(b.getAlly(), "Opti");
}
