/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#include "gtest/gtest.h"
#include "Gun.h"
#include <sstream>

TEST(GunTest, ConstructorsAndAccessors)
{
    Gun a;
    a.setModel("Pistol");
    a.setAmmo(10);
    ASSERT_EQ(a.getModel(), "Pistol");
    ASSERT_EQ(a.getAmmo(), 10);

    Gun b("Laser", 50);
    ASSERT_EQ(b.getModel(), "Laser");
    ASSERT_EQ(b.getAmmo(), 50);

    Gun c(b);
    ASSERT_EQ(c.getAmmo(), 50);
}

TEST(GunTest, OutputOperator)
{
    Gun g("Laser", 50);
    std::ostringstream ss;
    ss << g;
    std::string s = ss.str();
    ASSERT_NE(s.find("Gun("), std::string::npos);
    ASSERT_NE(s.find("50"), std::string::npos);
}
