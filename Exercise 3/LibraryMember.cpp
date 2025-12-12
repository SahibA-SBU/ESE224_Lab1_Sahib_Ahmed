#include "LibraryMember.h"
#include <iostream>
#include <iomanip>
using namespace std;

//default constructor
LibraryMember::LibraryMember() : memberID(""), name(""), borrowedBooks(0), maxBooks(5) {}

//parameterized constructor
LibraryMember::LibraryMember(const string& ID, const string& name, int max)
    : memberID(ID), name(name), borrowedBooks(0), maxBooks(max) {
}

bool LibraryMember::borrowBook(int num) {
    if (num <= 0 || (num + borrowedBooks > maxBooks)) {
        cerr << "Error with borrowing\n";
        return false;
    }
    else {
        borrowedBooks += num;
        return true;
    }

}
bool LibraryMember::returnBook(int num) {
    if (num <= 0 || (num > borrowedBooks)) {
        cerr << "Error with returning\n";
        return false;
    }
    else {
        borrowedBooks -= num;
        return true;
    }
}


void LibraryMember::displayInfo() const {
    cout << "Member ID: " << memberID << "\n";
    cout << "Name: " << name << "\n";
    cout << "Borrowed Books: " << borrowedBooks << "\n";
    cout << "Max Books: " << maxBooks << "\n";
    cout << "\n\n";
}