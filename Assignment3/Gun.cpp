/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#include "Gun.h"
#include <iostream>

Gun::Gun() : model_("None"), ammo_(0) {}
Gun::Gun(const std::string& model, int ammo) : model_(model), ammo_(ammo) {}
Gun::Gun(const Gun& other) : model_(other.model_), ammo_(other.ammo_) {}
Gun::~Gun() {}

void Gun::setModel(const std::string& model)
{
    model_ = model;
}
std::string Gun::getModel() const
{
    return model_;
}

void Gun::setAmmo(int ammo)
{
    ammo_ = ammo;
}
int Gun::getAmmo() const
{
    return ammo_;
}

void Gun::PrintInfo() const
{
    std::cout << "Gun::PrintInfo\n";
}
void Gun::FireSound() const
{
    std::cout << "Gun::FireSound\n";
}

std::ostream& operator<<(std::ostream& os, const Gun& g)
{
    os << "Gun(model=" << g.model_ << ", ammo=" << g.ammo_ << ")";
    return os;
}
