// Ryan Taylor: CS1300 Fall 2018
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// Homework 2 - Problem 2

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

/**
 *Algorithm: take inputed celsius and output degrees in farenheit
 *1. take an input value in celsius
 *2. use inputted number in formlua to convert to farenheit
 *3. output degrees farenheit to 2 decimal places accuracy
 */

 double celsiusToFahrenheit(double c){ // takes an input of celsius
     double f;
     f = ((c*9)/5)+32; // puts the inputted celsius through formula to calculate degrees farenheit
     cout<<"The temperature of " << c << " in fahrenheit is " << setprecision(2) << fixed << f << endl; // outputs degrees farenheit
 }
 
 int main(){
  int test = (38);
  celsiusToFahrenheit(test);
  test = 0;
  celsiusToFahrenheit(test);
 }