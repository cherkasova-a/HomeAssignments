/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#include "gtest/gtest.h"
#include "Decepticon.h"
#include "Engine.h"
#include "Gun.h"

TEST(DecepticonTest, ConstructorAndSetters)
{
    Engine engine("V8", 1000);
    Gun gun("Laser", 50);


    Decepticon d("Megatron", 10, 200, 60, true, engine, &gun, 100, 50);

    d.setStealth(80);
    ASSERT_EQ(d.getStealth(), 80);

    d.setRage(100);
    ASSERT_EQ(d.getRage(), 100);
}

TEST(DecepticonTest, Methods)
{
    Engine engine("V8", 1000);
    Gun gun("Laser", 50);

    Decepticon d("Megatron", 10, 200, 60, true, engine, &gun, 100, 50);

    ASSERT_TRUE(d.Cloak());
    ASSERT_TRUE(d.Transform());
}
