#include <iostream>
#include <string>
#include "Book.h"
using namespace std;
        
        Book::Book(){    
            title = "";
            author = "";
        }
        
        Book::Book(string t, string a){
            title = t;
            author = a;
        }
        
        void Book::setAuthor(string inAuthor){
            author = inAuthor;
        }
        
        void Book::setTitle(string inTitle){
            title = inTitle;
        }
        
        string Book::getAuthor(){
            return author;
        }

        string Book::getTitle(){
            return title;
        }