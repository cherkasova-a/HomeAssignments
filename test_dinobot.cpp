/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#include "gtest/gtest.h"
#include "Dinobot.h"

TEST(DinobotTest, CtorsAndMethods)
{
    Engine eng("E", 300);
    Gun gun("G", 20);
    Dinobot di("Di", 3, 30, 7, true, eng, &gun, 99, 5);
    ASSERT_EQ(di.getPower(), 30);
    di.setFerocity(100);
    ASSERT_EQ(di.getFerocity(), 100);

    ASSERT_TRUE(di.Move());
    ASSERT_TRUE(di.Fire());
    ASSERT_TRUE(di.Transform());
}

TEST(DinobotTest, CopyCtor)
{
    Engine eng("E", 300);
    Gun gun("G", 20);
    Dinobot di("Di",3,30,7,true,eng,&gun,10,2);
    Dinobot copy(di);
    ASSERT_EQ(copy.getSize(), 2);
}
