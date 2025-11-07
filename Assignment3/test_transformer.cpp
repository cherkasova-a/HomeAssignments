/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#include "gtest/gtest.h"

#include "Engine.h"
#include "Gun.h"
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"
TEST(EngineTest, Constructor)
{
    Engine e("V8", 1000);
    e.setType("V8");
    e.setPower(1000);
    
    ASSERT_EQ(e.getType(), "V8");
    ASSERT_EQ(e.getPower(), 1000);
}

TEST(GunTest, Constructor)
{
    Gun g("Laser", 50);
    g.setModel("Laser");
    g.setAmmo(50);

    ASSERT_EQ(g.getModel(), "Laser");
    ASSERT_EQ(g.getAmmo(), 50);
}

TEST(TransformerTest, BasicMethods)
{
    Engine engine("V8", 1000);
    Gun gun("Laser", 50);

    Transformer t("Optimus", 5, 100, 50, true, engine, &gun);

    t.setName("Bumblebee");
    ASSERT_EQ(t.getName(), "Bumblebee");

    t.setLevel(10);
    ASSERT_EQ(t.getLevel(), 10);

    ASSERT_TRUE(t.Move());
    ASSERT_TRUE(t.Fire());
    ASSERT_TRUE(t.Transform());
}
