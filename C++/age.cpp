#include <iostream>

int main(int argc, char** argv) {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age + 10 << " years old in 10 years!\n";
    std::cerr << "Error alert!";
}