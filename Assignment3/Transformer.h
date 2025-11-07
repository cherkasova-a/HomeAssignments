/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Engine.h"
#include "Gun.h"

class Transformer {
 public:
  Transformer(std::string name, int level, int power, int speed,
 bool armor, Engine engine, Gun* gun);//constructor
  ~Transformer();//destructor

  //Metods
  bool Move();
  bool Fire();
  bool Transform();

  void setName(const std::string& name);
  std::string getName();

  void setLevel(int level);
  int getLevel();

  void setPower(int power);
  int getPower();

  void setSpeed(int speed);
  int getSpeed();

  void setArmor(bool armor);
  bool  getArmor();

  void setGun(Gun* gun);
  Gun* getGun();

  Engine getEngine();

 private:
  std::string name_;
  int level_;
  int power_;
  int speed_;
  bool armor_;
  Engine engine_;  // composition
  Gun* gun_;       //association
};

#endif
