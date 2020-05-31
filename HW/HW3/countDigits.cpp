// CS1300 Fall 2018
// Ryan Taylor
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// Homework 3 - Problem 2

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm: find number of digits in an input integer
 * 1. Take an input
 * 2. Take absolute value of input to make computing negative inputs easier
 * 3. If input is 1 or 0, it has one digit
 * 4. Take log base 10 plus one of the input to determine the number of digits
 */

int countDigits(int n){ // take an input
    int digits;
    n = abs(n); // absolute value of input
    digits = ((n<=1)? 1 : log10(n)+1); // determine number of digits via log base 10
    return digits;
}

int main(){ // test cases
    int test = 23;
    countDigits(test);
    test = 5;
    countDigits(test);
    test = 234;
    countDigits(test);
}