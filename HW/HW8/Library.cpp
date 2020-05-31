#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <string>
#include <math.h>
#include "Book.h"
#include "User.h"
#include "Library.h"
using namespace std;

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

Library::Library(){
    numBooks = 0;
    numUsers = 0;
}
 
int Library::readBooks(string filename){
    
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
            
            if(numBooks<200){    
                
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
    }
    
    else{
        return -1;
    }
    
    return numBooks;
    
}

int Library::readRatings(string filename){
    
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
        
        for(numUsers; numUsers < lines; numUsers++){
            
            int rates = 0;
            
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
                userObj.setRatingAt(j, prating[j]);// assign each rating the next one of that person's ratings
                rates++;
            }
            cout << userObj.getUsername() << "..." << endl;
            users[numUsers] = userObj; // assign object to array of objects at that point
            users[numUsers].setNumRatings(rates);
        }
    }
    
    else{
        return -1;
    }
    
    return numUsers;
}

void Library::printAllBooks(){
    
    int i = 0;
    
    if(numBooks == 0){
        cout<<"Database has not been fully initialized"<<endl;
    }
    
    else{
        cout<<"Here is a list of books"<<endl;
        
        // run title and author retreiving functions for each step in the array
        for(i = 0; i<numBooks; i++){
            cout<<books[i].getTitle()<<" by "<<books[i].getAuthor()<<endl;
        }
    }
    cout<<endl;
}

int Library::getCountReadBooks(string username){
    int count = 0;
    int test;
    string name = "";
    
    if(numBooks == 0 || numUsers == 0){
        cout<<"Database has not been fully initialized";
        return -1;
    }
    
    for(int i = 0; i<numUsers; i++){
        
        if(users[i].getUsername() == username){
            
            name = users[i].getUsername();
            
            for(int j = 0; j<users[i].getNumRatings(); j++){
                
                if(users[i].getRatingAt(j)<=0){
                    count=count;
                }
                else{
                    count++;
                }
            }
        }
    }
    if(name == ""){
        cout<<username<<" does not exist in the database" << endl;;
        return -2;
    }
    return count;
}

double Library::calcAvgRating(string bookname){
    string title = "";
    int x = 0;
    double total = 0;
    double rating;
    int use = 0;
    
    if(numBooks == 0 || numUsers == 0){
        cout<<"Database has not been fully initialized"<<endl;
        return -1;
    }
    
    for(int i = 0; i<numBooks; i++){
        
        if(books[i].getTitle() == bookname){
            title = bookname;
            x = i;
        }
    }
    
    if(title == ""){
        cout<<title<<" does not exist in the database"<<endl;
        return -2;
    }
    
    for(int i = 0; i<numUsers; i++){
        
        if(users[i].getRatingAt(x)>0){
            total = total + users[i].getRatingAt(x);
            use++;
        }
        else{
            total = total;
        }
    }
    rating = total / use;
    return rating;
}

bool Library::addUser(string username){
    
    string name = username;
    
    transform(username.begin(), username.end(), username.begin(), ::tolower);
    
    for(int i = 0; i<numUsers; i++){
        
        if(users[i].getUsername() == username){
            cout<< name << " already exists in the database"<<endl;
            return false;
        }
    }
    
    User userobj;
    userobj.setUsername(username);
    users[numUsers] = userobj;
    numUsers++;
    return true;
}

bool Library::checkOutBook(string username, string title, int rate){
    int x, y;
    string bookname = "";
    string name = "";
    
    for(int i = 0; i<numBooks; i++){
        if(books[i].getTitle() == title){
            bookname = books[i].getTitle();
            x = i;
        }
    }
    
    for(int j = 0; j<numUsers; j++){
        if(users[j].getUsername() == username){
            name = users[j].getUsername();
            y = j;
        }
    }
    
    if(bookname == "" || name == "" || rate<0 || rate>5 || numUsers == 0 || numBooks == 0){
        
        if(numUsers == 0 || numBooks == 0){
            cout<<"Database has not been fully initialized"<<endl;
            goto end;
        }
        
        if(name == ""){
            cout<<username<<" does not exist in the database"<<endl;
        }
        
        if(bookname == ""){
            cout<<title<<" does not exist in the database"<<endl;
        }
        if(rate<0 || rate>5){
            cout<<rate<<" is not valid"<<endl;
        }
        
        end:
        return false;
    }
    
    if(users[y].getRatingAt(x) == 0){
        users[y].setNumRatings(users[y].getNumRatings() + 1);
    }
    
    users[y].setRatingAt(x, rate);
    return true;
}

void Library::viewRatings(string username){
    string name = "";
    int x = 0;
    
    if(numBooks != 0 && numUsers != 0){
        
        for(int i = 0; i<numUsers; i++){
        
            if(users[i].getUsername() == username){
            
                name = users[i].getUsername();
                int x = i;
            }
        }
        
        if(name != ""){
            
            if(users[x].getNumRatings() != 0){
                
                cout<<"Here are the books that " << name << " rated"<<endl;
                
                for(int i = 0; i<users[x].getNumRatings(); i++){
                    
                    cout<<"Title : " << books[i].getTitle() <<endl;
                    cout<<"Rating : " << users[x].getRatingAt(i) <<endl;
                    cout<<"-----"<<endl;
                    
                }
            }
            else{
                cout<<name<< " has not rated any books yet"<<endl;
            }
        }
        else{
            cout<<username<< " does not exist in the database"<<endl;
        }
    }
    else{
        cout<<"Database has not been fully initialized"<<endl;
    }
}

void Library::getRecommendations(string username){
    
    int x = 0, y = 0;
    int ssd = 100;
    int tempssd = 0;
    int g = 0;
    string name = "";
    
    for(int i = 0; i<numUsers; i++){
        if(users[i].getUsername() == username){
            x = i;
            name = users[i].getUsername();
        }
        else{
            x=x;
        }
    }
    
    for(int i = 0; i<numUsers; i++){
        
        tempssd = 0;
        
        for(int j = 0; j<users[x].getNumRatings(); j++){
            
            tempssd = pow(users[x].getRatingAt(j) - users[i].getRatingAt(j), 2);
            
        }
        
        if(tempssd<ssd){
            ssd = tempssd;
            y = i;
        }
        
    }
    
    if(name != ""){
    
        if(numUsers != 0 || numBooks != 0){
            
            if(g != 0){
                
                for(int i = 0; i<users[y].getNumRatings(); i++){
            
                    if(users[y].getRatingAt(i)>=3){
                        
                        if(users[x].getRatingAt(i) == 0){
                            
                            if(g<10){
                                cout<<books[i].getTitle()<< " by "<<books[i].getAuthor()<<endl;
                                g++;
                            }
                        }
                    }
                }
            }
            else{
                cout<<"There are no recommendations for "<<username<<" at the present" << endl;
            }
        }
        
        else{
            cout<<"Database has not been fully initialized" << endl;
        }
    
    }    
    else{
        cout<<username<<" does not exist in the database"<<endl;
    }
}