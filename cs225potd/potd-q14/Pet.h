// Pet.h
#pragma once
#include "Animal.h"
#include <string>

class Pet : public Animal
{
public:
    Pet();
    Pet(std::string type, std::string food, std::string name, std::string owner);

    std::string getName();
    std::string getOwnerName();
    void setName(std::string type);
    void setOwnerName(std::string food);
    std::string print();

private:
    std::string name_;
    std::string owner_;
};