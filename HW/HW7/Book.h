#ifndef BOOK_H_
#define BOOK_H_
#include <string>
using namespace std;

class Book{
        
    private:
    
        string author;
        string title;
            
    public:
        
        Book();
        Book(string, string);
        void setTitle(string);
        void setAuthor(string);
        string getTitle();
        string getAuthor();
};

#endif