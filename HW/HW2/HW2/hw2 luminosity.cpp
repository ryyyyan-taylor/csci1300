// Ryan Taylor: CS1300 Fall 2018
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// Homework 2 - Problem 2

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm: take inputs of brightness and distance to calculate luminosity
 * 1.take values of brightness and distance
 * 2.but values through formlua for luminosity
 * 3. output luminosity
 */

 int luminosity(double b, double d){ // takes an input value for brightness and distance
    float L;
    L = 4*b*3.14159*pow(d,2); // puts inputted distance and brightness through formula for luminosity
    return L; // output luminosity
}

int main(){
    int testb = 1.5;
    int testd = 17.8;
    luminosity(testb, testd);
    testb = 2;
    testd = 20;
    luminosity(testb, testd);
}