/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#ifndef GUN_H
#define GUN_H

#include <string>

class Gun {
 public:
  Gun(std::string model, int ammo);
  ~Gun();

  void setModel(const std::string& model);
  std::string getModel();

  void setAmmo(int ammo);
  int getAmmo();

 private:
  std::string model_;
  int ammo_;
};

#endif
