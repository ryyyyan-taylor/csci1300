// CS1300 Fall 2018
// Ryan Taylor
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// Homework 3 - Problem 3

#include <iostream>
using namespace std;

/**
 * Algorithm: return the number of days for the month based on an input
 * 1. Take a value in to the funcion
 * 2. switch how many days is returned based on the actual days in that month
 * 3. If month is not real (1-12), return an error
 */

int daysOfMonth(int n){ // take in a value of the month
    switch(n){ // switch and return the appropriate nuumber of days
        case 1:
            cout<<"Month 1 has 31 days";
            break;
        case 2:
            cout <<"Month 2 has 28 or 29 days";
            break;
        case 3:
            cout<<"Month 3 has 31 days";
            break;
        case 4:
            cout<<"Month 4 has 30 days";
            break;
        case 5:
            cout<<"Month 5 has 31 days";
            break;
        case 6:
            cout<<"Month 6 has 30 days";
            break;
        case 7:
            cout<<"Month 7 has 31 days";
            break;
        case 8:
            cout<<"Month 8 has 30 days";
            break;
        case 9:
            cout<<"Month 9 has 31 days";
            break;
        case 10:
            cout<<"Month 10 has 31 days";
            break;
        case 11:
            cout<<"Month 11 has 30 days";
            break;
        case 12:
            cout<<"Month 12 has 31 days";
            break;
        default:
            cout<<"Invalid month number"; // if not an actual month 1-12, return an error
            break;
    }
}

int main(){
    int test = 3;
    daysOfMonth(test);
    test = 8;
    daysOfMonth(test);
}