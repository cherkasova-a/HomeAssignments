/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"
#include <ostream>

class Decepticon : public Transformer
{
public:
    Decepticon();
    Decepticon(const std::string& name, int level, int power, int speed, bool armor,
               const Engine& engine, Gun* gun, int stealth, int rage);
    Decepticon(const Decepticon& other);
    ~Decepticon();

    void setStealth(int stealth);
    int getStealth() const;

    void setRage(int rage);
    int getRage() const;

    bool Move() override;
    bool Fire() override;
    bool Transform() override;

    void PrintInfo() const override;

    friend std::ostream& operator<<(std::ostream& os, const Decepticon& d);

private:
    int stealth_;
    int rage_;
};

#endif
