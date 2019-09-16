#include <iostream>
#include "helloworld.h"
using namespace std;

// Declaring functions
void math();
void strings();

int main(int argc, char **argv)
{
    strings();
}

void math()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;
    cout << input << " + 10 = " << input + 10 << endl; // addition
    cout << input << " - 10 = " << input - 10 << endl; // subtraction
    cout << input << " * 10 = " << input * 10 << endl; // multiplication
    cout << input << " / 10 = " << input / 10 << endl; // division
    cout << input << " % 10 = " << input % 10 << endl; // modulo
}

void strings()
{
    string base = "banana";
    base.replace(2, 2, "AN");
    cout << base << endl;
    cout << base.find('A') << endl;
}

void memory()
{
    /**
     * MEMORY LOOKS LIKE THIS:
     * text 
     * initialized data
     * uninitialized data
     * * stack
     *  - functions are placed in stack frames here, with local variables in the frame
     *      - stack frames get created at function call, and destroyed at function return
     *      - variables received by functions are COPIES, not pointers
     *  - overflow can happen during: recursion with no base case 
     * 
     * heap
     *  - malloc allocates memory to the heap (new keyword)
     *  - all allocated memory needs to be deleted (delete keyword)
     * environment variables
     *  - argc, argv, x, y, any main variables
     * 
     * 
     * 
     * valgrind will check for memory leaks
     *  $valgrind --leak-check=full ./memory
     */
}