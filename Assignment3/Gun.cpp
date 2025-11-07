/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#include "Gun.h"

Gun::Gun(std::string model, int ammo) {}
Gun::~Gun() {}

void Gun::setModel(const std::string& model) { model_ = model; }
std::string Gun::getModel() { return model_; }

void Gun::setAmmo(int ammo) { ammo_ = ammo; }
int Gun::getAmmo() { return ammo_; }
