/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"
#include <string>
#include <ostream>

class Autobot : public Transformer
{
public:
    Autobot();
    Autobot(const std::string& name, int level, int power, int speed, bool armor,
            const Engine& engine, Gun* gun, const std::string& ally, int speedBoost);
    Autobot(const Autobot& other);
    ~Autobot();

    void setAlly(const std::string& ally);
    std::string getAlly() const;

    void setSpeedBoost(int speed);
    int getSpeedBoost() const;

    bool Move() override;
    bool Fire() override;
    bool Transform() override;

    void PrintInfo() const override;

    friend std::ostream& operator<<(std::ostream& os, const Autobot& a);

private:
    std::string ally_;
    int speedBoost_;
};

#endif
