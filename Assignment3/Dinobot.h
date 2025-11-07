/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#ifndef DINOBOT_H
#define DINOBOT_H

#include "Transformer.h"

class Dinobot : public Transformer {
 public:
  Dinobot(std::string name, int level, int power, int speed, bool armor,
          Engine engine, Gun* gun, int ferocity, int size);
  ~Dinobot();

  void setFerocity(int ferocity);
  int getFerocity();

  void setSize(int size);
  int getSize();

  bool Roar();
  bool Transform() ;

 private:
  int ferocity_;
  int size_;
};

#endif 
