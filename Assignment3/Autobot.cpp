/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#include "Autobot.h"

Autobot::Autobot(std::string name, int level, int power, int speed, bool armor,
                 Engine engine, Gun* gun, std::string ally, int speedBoost)
: Transformer(name, level, power, speed, armor, engine, gun),
      ally_(ally), speedBoost_(speedBoost) {}
Autobot::~Autobot() {}

void Autobot::setAlly(const std::string& ally) { ally_ = ally; }
std::string Autobot::getAlly() { return ally_; }

void Autobot::setSpeedBoost(int boost) { speedBoost_ = boost; }
int Autobot::getSpeedBoost() { return speedBoost_; }

bool Autobot::Heal() { return true; }
bool Autobot::Transform() { return true; }
