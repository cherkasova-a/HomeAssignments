/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#ifndef ENGINE_H
#define ENGINE_H
#include <string>

class Engine {
    public:
      Engine(std::string type, int power);
      ~Engine();
    void setType(const std::string& type);
    std::string getType();

    void setPower(int power);
    int getPower();
    private:
      std::string type_;
      int power_;
};

#endif
