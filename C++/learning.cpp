#include <iostream>git 
#include "helloworld.h"
using namespace std;

// Declaring functions
void math();
void strings();

int main(int argc, char** argv) {
    strings();
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

void strings() {
    string base = "banana";
    base.replace(2, 2, "AN");
    cout << base << endl;
    cout << base.find('A') << endl;
}