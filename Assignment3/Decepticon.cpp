/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#include "Decepticon.h"

Decepticon::Decepticon(std::string name, int level, int power, int speed, bool armor,
                       Engine engine, Gun* gun, int stealth, int rage):
 Transformer(name, level, power, speed, armor, engine, gun),
      stealth_(stealth), rage_(rage)  {}
Decepticon::~Decepticon() {}

void Decepticon::setStealth(int stealth) { stealth_ = stealth; }
int Decepticon::getStealth() { return stealth_; }

void Decepticon::setRage(int rage) { rage_ = rage; }
int Decepticon::getRage() { return rage_; }

bool Decepticon::Cloak() { return true; }
bool Decepticon::Transform() { return true; }
