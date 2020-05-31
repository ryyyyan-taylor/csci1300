#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Book.h"
#include "User.h"
using namespace std;


// provided split funcion
 int split (string str, char c, string array[], int size)
 {
    if (str.length() == 0) {
         return 0;
     }
    string word = "";
    int count = 0;
    str = str + c;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
        {
            if (word.length() == 0)
                continue;
            array[count++] = word;
            word = "";
        } else {
            word = word + str[i];
        }
    }
    return count ;
 }

// fill in books array and return total books
int readBooks(string filename, Book books[], int& numBooks, int librarycap){
    
    // initiate necessary strings, variables, constants, etc
    string line = "";
    int lines = 0;
    string title = "";
    string author = "";
    line = "";
    char n = ',';
    int amount = 2;
    string word[amount];
    string authbook[200];
    
    ifstream file(filename);
    
    // make sure file does open
    if(file.is_open()){
       
       while(getline(file,line)){
           authbook[lines] = line; // fill an array with each line of the file
           lines++; // count number of lines in file
       }
            
        for(int i = 0; i<lines; i++){ 
                
            split(authbook[i], n, word, amount); // split each line of file at the commas
                
            author = word[0]; // assign the author to the sub string before the comma
            title = word[1]; // assign the tiitle to the sub string following the comma
            
            Book booksObj; // declarea books object
            // set title and author to received strings
            booksObj.setTitle(title);
            booksObj.setAuthor(author);
            // define book object to next point in the array
            books[i] = booksObj;
            
            numBooks++;
        }
    }
    
    else{
        return -1;
    }
    
    return numBooks;
    
}

// fill in usernames and ratings and return total people
int readRatings(string filename, User user[], int& numUsers, int usercap){
    
    // initiate necessary variables, strings, arrays, etc
    string line = "";
    string username = "";
    int lines = 0;
    char n = ',';
    int max = 200;
    string names[200];
    char ratarray[200];
    int x = 0;
    string linez[200];
    string linesubj = "";
    int prating[200];
    
    ifstream file(filename);
    
    // make sure file successfully opens
    if(file.is_open()){
        
        while(getline(file, line)){
            linez[lines] = line; // fill an array with each line of the file
            lines++; // count total lines of the file
        }
        
        for(numUsers = 0; numUsers < lines; numUsers++){
            
            linesubj = linez[numUsers]; // assign string to the next line each iteration
            
            split(linesubj, n, names, max); // split line at the comma
            
            username = names[0]; // assign the username the string just before the comma

            string pratings = names[1]; // assign a string the group of numbers following the comma
            string pprating = "";
            
            // remove all the spaces between the ratings
            for(int i = 0; i<pratings.length(); i++){
                if(isdigit(pratings[i])){
                    pprating = pprating + pratings[i];
                }
            }
            
            // take array of rating characters and convert them all to integers
            for(int i = 0; i<pprating.length(); i++){
                prating[i] = pprating[i] - 48;
            }
            
            User userObj; // define a user object
            userObj.setUsername(username);
            for(int j = 0; j<pprating.length(); j++){
                userObj.setRatingAt(j, prating[j]); // assign each rating the next one of that person's ratings
            }
            cout << userObj.getUsername() << "..." << endl;
            user[numUsers] = userObj; // assign object to array of objects at that point
        }
    }
    
    else{
        return -1;
    }
    
    return numUsers;
}

int printAllBooks(Book books[], int stored){
    
    if(stored == 0){
        cout<<"No books are stored"<<endl;
    }
    
    else{
        cout<<"Here is a list of books"<<endl;
        
        // run title and author retreiving functions for each step in the array
        for(int i = 0; i<stored; i++){
            cout<<books[i].getTitle()<<" by "<<books[i].getAuthor()<<endl;
        }
    }
    cout<<endl;
}

// menu
void displayMenu(){
  cout << "Select a numerical option:" << endl;
  cout << "======Main Menu=====" << endl;
  cout << "1. Read book file" << endl;
  cout << "2. Read user file" << endl;
  cout << "3. Print book list" << endl;
  cout << "4. Find number of books user rated" << endl;
  cout << "5. Get average rating" << endl;
  cout << "6. Quit" << endl;
}


int main(int argc, char const *argv[]) {
    string choice;
    int numBooks = 0;
    int numUsers = 0;
    Book arrayb[200]; // initiate object arrays of user and books objects
    User arrayu[200];
    string filename = "";
    
    while (choice != "6") {
            displayMenu();
            getline(cin, choice);
            switch (stoi(choice)) {
                case 1:
                    // read book file
                    cout << "Enter a book file name:" << endl;
                    getline(cin,filename);
                    
                    readBooks(filename, arrayb, numBooks, 200);
                    
                    cout << "Total books in the database: " << numBooks << endl;
                    cout << endl;
                    break;

                case 2:
                    // read user file
                    cout << "Enter a rating file name:" << endl;
                    getline(cin,filename);
                    
                    readRatings(filename, arrayu, numUsers, 200);

                    cout << "Total users in the database: " << numUsers << endl;
                    cout << endl;
                    break;

                case 3:
                    
                    
                    printAllBooks(arrayb, numBooks);
                    
                    break;

                case 4:
                    // find the number of books user read
                    cout << "Enter username:" << endl;
                    
                    //////////////////////////////////////////////////////////////////////////
                    // Your code here. Call the appropriate function(s).
                    //////////////////////////////////////////////////////////////////////////
                    
                    cout << endl;
                    break;

                case 5:
                    // get the average rating of the book
                    cout << "Enter book title:" << endl;

                    //////////////////////////////////////////////////////////////////////////
                    // Your code here. Call the appropriate function(s).
                    //////////////////////////////////////////////////////////////////////////
                    
                    cout << endl;
                    break;
                case 6:
                    // quit
                    cout << "good bye!" << endl;
                    break;

                default:
                    cout << "invalid input\n" << endl;
            }
    }

    return 0;
}