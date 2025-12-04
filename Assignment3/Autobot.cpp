/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#include "Autobot.h"
#include <iostream>

Autobot::Autobot() : Transformer(), ally_("None"), speedBoost_(0) {}
Autobot::Autobot(const std::string& name, int level, int power, int speed, bool armor,
                 const Engine& engine, Gun* gun, const std::string& ally, int speedBoost)
    : Transformer(name, level, power, speed, armor, engine, gun), ally_(ally), speedBoost_(speedBoost) {}
Autobot::Autobot(const Autobot& other) : Transformer(other), ally_(other.ally_), speedBoost_(other.speedBoost_) {}
Autobot::~Autobot() {}

void Autobot::setAlly(const std::string& ally)
{
    ally_ = ally;
}
std::string Autobot::getAlly() const
{
    return ally_;
}

void Autobot::setSpeedBoost(int speed)
{
    speedBoost_ = speed;
}
int Autobot::getSpeedBoost() const
{
    return speedBoost_;
}

bool Autobot::Move()
{
    std::cout << "Autobot::Move\n";
    return true;
}
bool Autobot::Fire()
{
    std::cout << "Autobot::Fire\n";
    return true;
}
bool Autobot::Transform()
{
    std::cout << "Autobot::Transform\n";
    return true;
}

void Autobot::PrintInfo() const
{
    std::cout << "Autobot::PrintInfo\n";
}

std::ostream& operator<<(std::ostream& os, const Autobot& a)
{
    os << "Autobot(" << static_cast<const Transformer&>(a)
       << ", ally=" << a.ally_ << ", speedBoost=" << a.speedBoost_ << ")";
    return os;
}
