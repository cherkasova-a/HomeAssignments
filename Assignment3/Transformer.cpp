/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignmen3
*/
#include "Transformer.h"

Transformer::Transformer(std::string name, int level,
 int power,int speed, bool armor, Engine engine, Gun* gun):
name_(name), level_(level), power_(power), speed_(speed), armor_(armor), engine_(engine), gun_(gun) {}
Transformer::~Transformer() {}

bool Transformer::Move() { return true; }
bool Transformer::Fire() { return true; }
bool Transformer::Transform() { return true; }

void Transformer::setName(const std::string& name) { name_ = name; }
std::string Transformer::getName() { return name_; }

void Transformer::setLevel(int level) { level_ = level; }
int Transformer::getLevel() { return level_; }

void Transformer::setPower(int power) { power_ = power; }
int Transformer::getPower() { return power_; }

void Transformer::setSpeed(int speed) { speed_ = speed; }
int Transformer::getSpeed() { return speed_; }

void Transformer::setArmor(bool armor) { armor_ = armor; }
bool Transformer::getArmor() { return armor_; }

void Transformer::setGun(Gun* gun) { gun_ = gun; }
Gun* Transformer::getGun() { return gun_; }

Engine Transformer::getEngine() { return engine_; }
