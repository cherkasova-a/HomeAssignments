/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#include "gtest/gtest.h"
#include "Dinobot.h"
#include "Engine.h"
#include "Gun.h"

TEST(DinobotTest, ConstructorAndSetters)
{
    Engine engine("V8", 1000);
    Gun gun("Laser", 50);


    Dinobot di("Grimlock", 7, 150, 40, true, engine, &gun, 90, 5);

    di.setFerocity(95);
    ASSERT_EQ(di.getFerocity(), 95);

    di.setSize(6);
    ASSERT_EQ(di.getSize(), 6);
}

TEST(DinobotTest, Methods)
{
    Engine engine("V8", 1000);
    Gun gun("Laser", 50);

    Dinobot di("Grimlock", 7, 150, 40, true, engine, &gun, 90, 5);

    ASSERT_TRUE(di.Roar());
    ASSERT_TRUE(di.Transform());
}
