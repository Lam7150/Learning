// Pet.cpp
#include <iostream>
#include <string>
#include "Pet.h"

void Pet::setName(std::string name)
{
    name_ = name;
}

std::string Pet::getName()
{
    return name_;
}

void Pet::setOwnerName(std::string owner)
{
    owner_ = owner;
}

std::string Pet::getOwnerName()
{
    return owner_;
}

std::string Pet::print()
{
    return "My name is " + name_;
};

Pet::Pet() : name_("Fluffy"), owner_("Cinda")
{
    setType("cat");
    setFood("fish");
}

Pet::Pet(std::string type, std::string food, std::string name, std::string owner)
{
    setType(type);
    setFood(food);
    name_ = name;
    owner_ = owner;
}
