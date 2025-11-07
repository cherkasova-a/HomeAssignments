/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#include "Dinobot.h"

Dinobot::Dinobot(std::string name, int level, int power, int speed, bool armor,
                 Engine engine, Gun* gun, int ferocity, int size):
 Transformer(name, level, power, speed, armor, engine, gun),
      ferocity_(ferocity), size_(size)  {}
Dinobot::~Dinobot() {}

void Dinobot::setFerocity(int ferocity) { ferocity_ = ferocity; }
int Dinobot::getFerocity() { return ferocity_; }

void Dinobot::setSize(int size) { size_ = size; }
int Dinobot::getSize() { return size_; }

bool Dinobot::Roar() { return true; }
bool Dinobot::Transform() { return true; }
