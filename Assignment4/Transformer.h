/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <ostream>
#include "Engine.h"
#include "Gun.h"

class Transformer
{
public:
    Transformer();
    Transformer(const std::string& name, int level, int power, int speed,
                bool armor, const Engine& engine, Gun* gun);
    Transformer(const Transformer& other);
    virtual ~Transformer();

    virtual bool Move();
    virtual bool Fire();
    virtual bool Transform() = 0; // чисто виртуальный

    virtual void PrintInfo() const;

    void setName(const std::string& name);
    std::string getName() const;

    void setLevel(int level);
    int getLevel() const;

    void setPower(int power);
    int getPower() const;

    void setSpeed(int speed);
    int getSpeed() const;

    void setArmor(bool armor);
    bool getArmor() const;

    void setGun(Gun* gun);
    Gun* getGun() const;

    Engine getEngine() const;

    friend std::ostream& operator<<(std::ostream& os, const Transformer& t);

private:
    std::string name_;
    int level_;
    int power_;
    int speed_;
    bool armor_;
    Engine engine_;
    Gun* gun_;
};

#endif
