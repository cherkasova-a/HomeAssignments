/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment4
*/
#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include <ostream>

class Engine
{
public:
    Engine();
    Engine(const std::string& type, int power);
    Engine(const Engine& other);
    ~Engine();

    void setType(const std::string& type);
    std::string getType() const;

    void setPower(int power);
    int getPower() const;

    virtual void PrintInfo() const;
    virtual void Sound() const;

    friend std::ostream& operator<<(std::ostream& os, const Engine& e);

private:
    std::string type_;
    int power_;
};

#endif
