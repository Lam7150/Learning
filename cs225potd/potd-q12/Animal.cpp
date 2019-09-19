// Animal.cpp
#include "Animal.h"
#include <string>

Animal::Animal()
{
    type_ = "cat";
    food_ = "fish";
}

Animal::Animal(std::string type, std::string food)
{
    type_ = type;
    food_ = food;
}

std::string Animal::getType()
{
    return type_;
}
std::string Animal::getFood()
{
    return food_;
}

void Animal::setType(std::string type)
{
    type_ = type;
}
void Animal::setFood(std::string food)
{
    food_ = food;
}
std::string Animal::print()
{
    return "I am a " + type_;
}