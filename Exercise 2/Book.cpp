#include "Book.h"
#include <iostream>
#include <iomanip>
using namespace std;

//default constructor
Book::Book() : bookTitle(""), bookAuthor(""), bookPrice(0.0), bookISBN("") {}

//parameterized constructor
Book::Book(const string& title, const string& author, const string& ISBN, double price)
    : bookTitle(title), bookAuthor(author), bookPrice(price), bookISBN(ISBN) {
}

//setters
void Book::setTitle(const string& title) { bookTitle = title; }
void Book::setPrice(double price) { bookPrice = price; }
void Book::setAuthor(const string& author) { bookAuthor = author; }
void Book::setISBN(const string& ISBN) { bookISBN = ISBN; } 

//getters
string Book::getTitle() const { return bookTitle; }
double Book::getPrice() const { return bookPrice; }
string Book::getAuthor() const { return bookAuthor; }
string Book::getISBN() const { return bookISBN; }




void Book::printSummary() const {
    cout << fixed << setprecision(2);
    cout << "Title: " << bookTitle << "\n";
    cout << "Price: " << bookPrice << "\n";
    cout << "Author: " << bookAuthor << "\n";
    cout << "ISBN: " << bookISBN << "\n";
    cout << "\n\n";
}

string Book::pricing() {
    if (bookPrice >= 20.0)
        return "Premium";
    else
        return "Standard";
}

//canculations
void Book::applyDiscount(double discount) {
    if (0 <= discount && discount <= 100)
        bookPrice = bookPrice * ((100 - discount) / 100);
}