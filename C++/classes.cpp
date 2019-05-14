#include <iostream>
#include <fstream>
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

    friend ostream& operator<< (ostream &out, const Goo &goo);
    friend istream& operator>> (istream &in, Goo &goo);
};


ostream& operator<< (ostream &out, const Goo &goo) {
    out << "Name | " << goo.name << endl;
    out << "ID   | " << goo.id << endl;

    return out;
}


istream& operator>> (istream &in, Goo &goo) {
    in >> goo.id >> goo.name;
    return in;
}


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

    // Making object from user
    Goo userGoo;
    cout << endl << "Input new Goo properties: ";
    cin >> userGoo;
    cout << userGoo;

    // Files
    // Making outfile
    ofstream outfile;
    outfile.open("goo.txt");

    // Writing to outfile
    outfile << "New Goo Class: " << endl;
    outfile << userGoo << endl;

    // Closing outfile
    outfile.close();

    // Opening infile
    ifstream infile;
    infile.open("goo.txt");
    char data[100];

    // Grabbing data from infile
    cout << "Reading from the infile" << endl;
    infile >> data;

    // Write the data to the screen
    cout << data << endl;

    // Closing infile
    infile.close();

    return 0;
}