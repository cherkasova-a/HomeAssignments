/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment3
*/
#include "Engine.h"
Engine::Engine(std::string type, int power): type_(type), power_(power) {}
Engine::~Engine() {}

void Engine::setType(const std::string& type) {type_ = type; }
std::string Engine::getType() {return type_;}

void Engine::setPower(int power) {power_ =power; }
int Engine::getPower() {return power_; }

