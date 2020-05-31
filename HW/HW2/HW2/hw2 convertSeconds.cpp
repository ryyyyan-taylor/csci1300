// Ryan Taylor: CS1300 Fall 2018
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// Homework 2 - Problem 1

#include <iostream>
#include <math.h>
using namespace std;
 
 /**
  * Algorithm: convert a number of seconds into hours, minutes, and seconds
  * 1. divide inputted seconds by 3600 to get the number of hours
  * 2. use remainder from step 1, divided by 60 to get the remaining minutes
  * 3. use remainder from step 2. divided by 60 to get remaining seconds
  */
  
  
int convertSeconds(int n){ // takes an input in seconds
    
    int hour,minutes,seconds;
    
    hour = n / 3600; // finds number of hours
    n %= 3600; // takes the remainder of n and the number of hours and redefines n as that value
    minutes = n / 60 ; // finds number of minutes
    n %= 60; // takes the remainder of n and the number of minutes and redefines n as that value
    seconds = n;
     
    cout << hour << " hour(s) " << minutes << " minute(s) " << seconds << " second(s) "<< endl; // outputs hours, minutes, and seconds
    
    return 0;
    }
    
int main(){
    int test = 3671;
    convertSeconds(test);
    test = 60;
    convertSeconds(test);
}