// CSCI1300 Fall 2018
// Author: <Ryan Taylor>
// Recitation: <105> – <Ashwin Sangkaralingam>
// Cloud9 Workspace Editor Link: <https://ide.c9.io/ryta4737/recitation>
// hmwk8 / Project2


#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <string>
#include "Book.h"
#include "User.h"
#include "Library.h"
using namespace std;

/* displayMenu:
 * displays a menu with options
 * DO NOT MODIFY THIS FUNCTION
 */
 
 void displayMenu(){
     cout << "Select a numerical option:" << endl;
     cout << "======Main Menu=====" << endl;
     cout << "1. Read book file" << endl;
     cout << "2. Read user file" << endl;
     cout << "3. Print book list" << endl;
     cout << "4. Find number of books user rated" << endl;
     cout << "5. Get average rating" << endl;
     cout << "6. Add a User" << endl;
     cout << "7. Checkout a book" << endl;
     cout << "8. View Ratings" << endl;
     cout << "9. Get Recommendations" << endl;
     cout << "10. Quit" << endl;
 }


int main(int argc, char const *argv[]) {
    string choice;
    string filename = "";
    string username = "";
    string title = "";
    float output;
    Library libraryobj;
    int rating;
    string rates = "";
    int g = 0;
    
    while (choice != "10") {
            displayMenu();
            getline(cin, choice);
            for(int i = 0; i<choice.length(); i++){
                if(isdigit(choice[i])){
                    
                }
            switch (stoi(choice)) {
                case 1:
                    // read book file
                    cout << "Enter a book file name:" << endl;
                    getline(cin,filename);
                    
                    output = libraryobj.readBooks(filename);
                    
                    if(output>=0){
                        cout << "Total books in the database: " << output << endl;
                        cout << endl;
                    }
                    else if(ouput<0){
                        cout<<"No books saved to the database"<<endl;
                        cout<<endl;
                    }
                    break;

                case 2:
                    // read user file
                    cout << "Enter a rating file name:" << endl;
                    getline(cin,filename);
                    
                    output = libraryobj.readRatings(filename);

                    if(output>0){
                        cout << "Total users in the database: " << output << endl;
                        cout << endl;
                    }
                    else if(ouput<=0){
                        cout<<"No users saved to database"<<endl;
                        cout<<endl;
                    }
                    break;

                case 3:
                    
                    libraryobj.printAllBooks();
                    
                    break;

                case 4:
                    // find the number of books user read
                    cout << "Enter username:" << endl;
                    getline(cin,username);
                    
                    output = libraryobj.getCountReadBooks(username);
                    
                    if(output == -1){
                        cout<<"Database has not been fully initialized";
                    }
                    
                    else if(output == -2){
                        cout<<username<< " does not exist in the database";
                    }
                    
                    else if(output>=0){
                        cout<< username << " rated " << output << " books";
                    }
                    
                    cout << endl;
                    break;

                case 5:
                    // get the average rating of the book
                    cout << "Enter book title:" << endl;
                    getline(cin,title);
                    
                    output = libraryobj.calcAvgRating(title);
                    
                    if(output == -1){
                        cout<<"Database has not been fully initialized";
                    }
                    
                    else if(output == -2){
                        cout<<username<< " does not exist in the database";
                    }
                    else if(output >= 0){
                        cout<<"The average rating for " << setprecision(2) << fixed<< title << " is " << output;
                    }
                    cout << endl;
                    break;
                    
                case 6:
                    // add new user to the database
                    cout<< "Enter a username:" << endl;
                    getline(cin,username);
                    
                    if(libraryobj.addUser(username) == true){
                        cout<<"Welcome to the library "<<username<<endl;
                    }
                    else{
                        cout<<username<< " could not be added in the database"<<endl;
                    }
                    break;
                    
                case 7:
                    // existing user checks out a book
                        
                    cout<<"Enter a username:"<<endl;
                    getline(cin,username);
                        
                    cout<<"Enter a book title"<<endl;
                    getline(cin,title);
                        
                    cout<<"Enter a rating for the book:"<<endl;
                    getline(cin,rates);
                    rating = stoi(rates);
                    
                    if(libraryobj.checkOutBook(username,title,rating) == true){
                        cout<<"We hope you enjoyed your book. The rating has been updated";
                    }
                    else if(libraryobj.checkOutBook(username,title,rating) == false){
                        cout<<username<< " could not check out " << title;
                    }
                    
                    cout<<endl;
                    break;
                
                case 8:
                    // show all ratings by username
                    cout<< "Enter username:" << endl;
                    getline(cin,username);
                    
                    libraryobj.viewRatings(username);
                    break;
                
                case 9:
                    // get reccomendations for a certain user
                    cout<<"Enter username:" << endl;
                    getline(cin,username);
                    
                    libraryobj.getRecommendations(username);
                    
                    cout<<endl;
                    break;
                
                
                case 10:
                    // exit the function
                    cout<<"good bye!"<<endl;
                    break;
                    
                default:
                    cout<<"invalid input"<<endl;
                    cout<<endl;
            }
    }
    
}