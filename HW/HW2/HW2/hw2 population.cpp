// Ryan Taylor: CS1300 Fall 2018
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// Homework 2 - Problem 3

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm: calculate the current population in one year's time
 *1. take an input of the current population
 *2. add the number of briths and immigrants in one year
 *3. subtract the number of deaths in one year
 *4. output the population after one year
 */

int population (float currentPop){ // takes an input of the current population
    float births,deaths,immigrants,population;
    births = 3942000; // total births in one year
    deaths = -2628000; // total deaths in one year
    immigrants = 1168000; // total immigrants in one year

    population = currentPop + births + deaths + immigrants; // adds all values together to find new population
    return population;
}

int main(){
    int test = 1000000;
    population(test);
    test = 0;
    population(test);
}