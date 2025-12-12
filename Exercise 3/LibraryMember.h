#ifndef LIBRARYMEMBER_H
#define LIBRARYMEMBER_H

#include <string>
using namespace std;

class LibraryMember {
    private:
        int borrowedBooks;
        int maxBooks;
        string memberID;
        string name;


    public:
        //constructors
        LibraryMember();
        LibraryMember(const string& memberID, const string& name, int maxBooks);

        bool borrowBook(int num);
        bool returnBook(int num);

        //display
        void displayInfo() const;

};

#endif