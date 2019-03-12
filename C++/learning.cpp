#include <iostream>
#include "helloworld.h"
using namespace std;

// Declaring functions
void math();

int main(int argc, char** argv) {
    helloWorld();
}

void math() {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    cout << input << " + 10 = " << input + 10 << endl; 
    cout << input << " - 10 = " << input - 10 << endl; 
    cout << input << " * 10 = " << input * 10 << endl; 
    cout << input << " / 10 = " << input / 10 << endl; 
    cout << input << " % 10 = " << input % 10 << endl; 
}