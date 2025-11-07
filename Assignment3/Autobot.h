/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"
#include <string>

class Autobot : public Transformer {
 public:
  Autobot(std::string name, int level, int power, int speed, bool armor,
          Engine engine, Gun* gun, std::string ally, int speedBoost);
  ~Autobot();

  void setAlly(const std::string& ally);
  std::string getAlly();

  void setSpeedBoost(int speed);
  int getSpeedBoost();

  bool Heal();
  bool Transform();

 private:
  std::string ally_;
  int speedBoost_;
};

#endif
