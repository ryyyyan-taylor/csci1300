#ifndef LIBRARY_H_
#define LIBRARY_H_
#include <string>
#include "Book.h"
#include "User.h"
using namespace std;

class Library{
    
    private:
        User users[200];
        Book books[200];
        int numBooks;
        int numUsers;
        int sizeUser;
        int sizeBook;
        
    public:
        Library();
        int readBooks(string);
        int readRatings(string);
        void printAllBooks();
        int getCountReadBooks(string);
        double calcAvgRating(string);
        bool addUser(string);
        bool checkOutBook(string, string, int);
        void viewRatings(string);
        void getRecommendations(string);
    
};

#endif