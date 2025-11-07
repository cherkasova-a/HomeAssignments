/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
 public:
  Decepticon(std::string name, int level, int power, int speed, bool armor,
             Engine engine, Gun* gun, int stealth, int rage);
  ~Decepticon();

  void setStealth(int stealth);
  int getStealth();

  void setRage(int rage);
  int getRage();

  bool Cloak();
  bool Transform() ;

 private:
  int stealth_;
  int rage_;
};

#endif
