// CS1300 Fall 2018
// Ryan Taylor
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// Homework 3 - Problem 1

#include <iostream>
using namespace std;

/**
 * Algorithm: that gives the value of the input in the Collatz step
 * 1. Take an input
 * 2. If input is less than 0, output is 0
 * 3. If input is even, ouput in input divided by 2
 * 4. If input is odd, output is 3 times the input plus 1
 */

int collatzStep(int n){ // take an input
    int collatz;
    if(n < 0){ // if input is is less than zero, output is zero
        collatz = 0;
    }
    
    if(n % 2 == 0){ // take the remainder of input and 2 to see if input is even
        collatz = n/2; // if input is even, output is input divided by 2
    }
    
    if(n % 2 > 0) // take the remainder of input and 2 to see if input is odd
        collatz = 3 * n + 1; // if input is odd, output is 3 times input plus 1
        
    return collatz;
}

int main(){ // test cases
    int test = 4;
    collatzStep(test);
    test = 7;
    collatzStep(test);
    test = -5;
    collatzStep(test);
}