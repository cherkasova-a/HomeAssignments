/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#include "Engine.h"
#include <iostream>

Engine::Engine() : type_("Unknown"), power_(0) {}
Engine::Engine(const std::string& type, int power) : type_(type), power_(power) {}
Engine::Engine(const Engine& other) : type_(other.type_), power_(other.power_) {}
Engine::~Engine() {}

void Engine::setType(const std::string& type)
{
    type_ = type;
}
std::string Engine::getType() const
{
    return type_;
}

void Engine::setPower(int power)
{
    power_ = power;
}
int Engine::getPower() const
{
    return power_;
}

void Engine::PrintInfo() const
{
    std::cout << "Engine::PrintInfo\n";
}
void Engine::Sound() const
{
    std::cout << "Engine::Sound\n";
}

std::ostream& operator<<(std::ostream& os, const Engine& e)
{
    os << "Engine(type=" << e.type_ << ", power=" << e.power_ << ")";
    return os;
}
