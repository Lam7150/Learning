#include <iostream>
using namespace std;

class Goo {
    private:
    string name;
    int id;

    public:
    Goo() {
        cout << "Default constructor called" << endl;
    }

    Goo(int newId, string newName) {
        cout << "Parametrized constructor called" << endl;
        id = newId;
        name = newName;
    }

    Goo(Goo &other) {
        cout << "Copy constructor called" << endl;
        name = other.name;
        id = other.id;
    }

    // not defined in class definition
    void printName();

    // defined in class definition
    void printId() {
        cout << "I am number " << id << endl;
    }

    //friend std::ostream& operator<< (std::ostream &out, const Point &point);
};

// definition of printName using scope resolution operator
void Goo::printName() {
    cout << "My name is " << name << endl;
}

int main() {
    // Default constructor
    Goo blankGoo;
    blankGoo.printId();
    blankGoo.printName();
    cout << endl;

    // Parametrized constructor
    Goo goo(4, "Lam");
    goo.printId();
    goo.printName();
    cout << endl;

    // Copy constructor
    Goo gooCopy(goo);
    gooCopy.printId();
    gooCopy.printName();

    return 0;
}