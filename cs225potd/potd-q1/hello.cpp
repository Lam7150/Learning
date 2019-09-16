#include <string>
#include <iostream>

std::string hello() {
    int age = 19;
    std::string name = "Lam";

    return "Hello world! My name is " + name + " and I am " + std::to_string(age) + " years old.";
}