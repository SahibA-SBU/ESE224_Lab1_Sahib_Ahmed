#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
    private:
        string bookTitle;
        string bookAuthor;
        string bookISBN;
        double bookPrice;

    public:
        // Constructors
        Book();
        Book(const string& title, const string& author, const string& ISBN, double price);


        // Setters
        void setTitle(const string& title);
        void setAuthor(const string& author);
        void setISBN(const string& ISBN);
        void setPrice(double price);

        // Getters
        string getTitle() const;
        string getAuthor() const;
        double getPrice() const;
        string getISBN() const;

        // Display
        void printSummary() const;

        string pricing();

        void applyDiscount(double discount);
};

#endif