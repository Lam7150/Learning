// Animal.h
#pragma once
#include <string>

class Animal
{
public:
    Animal();
    Animal(std::string type, std::string food);

    std::string getType();
    std::string getFood();
    void setType(std::string type);
    void setFood(std::string food);
    std::string print();

private:
    std::string type_;
    std::string food_;
};