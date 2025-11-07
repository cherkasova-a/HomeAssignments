/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#include "gtest/gtest.h"
#include "Autobot.h"
#include "Engine.h"
#include "Gun.h"

TEST(AutobotTest, ConstructorAndSetters)
{
    Engine engine("V8", 1000);
    Gun gun("Laser", 50);

    Autobot a("Bumblebee", 5, 100, 50, true, engine, &gun, "Optimus", 10);

    a.setAlly("Ironhide");
    ASSERT_EQ(a.getAlly(), "Ironhide");

    a.setSpeedBoost(20);
    ASSERT_EQ(a.getSpeedBoost(), 20);
}

TEST(AutobotTest, Methods)
{
    Engine engine("V8", 1000);
    Gun gun("Laser", 50);

    Autobot a("Bumblebee", 5, 100, 50, true, engine, &gun, "Optimus", 10);

    ASSERT_TRUE(a.Heal());
    ASSERT_TRUE(a.Transform());
}
