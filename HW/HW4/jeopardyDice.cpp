// CSCI1300 Fall 2018
// Author: <Ryan Taylor>
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// Project1 

/**
 * Algorithm: Dice game to be played between a player and the computer
 * Human always goes first
 * Ask if the player would like to roll the dice
 * If the player enters Y, continue to roll the dice, if entered N, pass turn to the computer
 * Run a function which is the "dice", which returns a number between 1 and 6
 * If the dice ever rolls a 1 or 6, the player gets 0 points for the turn and passes the turn
 * If the dice ever rolls a 3, the player gets 15 points for the turn and passes the turn
 * If the dice rolls a 2,4, or 5, these numbers are added to the current turn total, and the player gets the option to roll the dice again
 * Repeat line 10-15 until the player either rolls a 1,3, 6, or answers N to if they would like to roll again
 * Display  the current totals of both the players and the computer and it becomes the computer's turn
 * The same number conditions defined in lines 13-15 apply
 * Roll the dice function
 * The computer will continue to roll until  it rolls a 1,3,6, or reaches a total of 10 or better
 * Display the current totals of both the players and the computer and the turn is passed back to the player
 * Repeat lines 10-21 until either the player or the computer reaches a score of at least 100
 * The player to reach that 100 first wins!
 */


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * rollDice 
 * returns a random integer between 1 and 6, works as rolling a dice.
 * return value, int number (1-6)
 */
 
 
int rollDice(){
    return rand() % 6 +1;
}


int humanTurn(){
    // define and reset all necessary variables
    int humTurnTotal = 0;
    int rollsTotal = 0;
    int dice;
    string in;
    char y, n;
    
    cout<<"\n";
    cout<<"It is now human's turn" << endl;
    cout<<"\n";
    
    rolls:
    // if first roll each turn, output something different than every other roll
    if(rollsTotal==0){
        cout<<"Do you want to roll a dice (Y/N)?:" << endl;
        cin>>in;
    }
    else if(rollsTotal>0){
        cout<<"Do you want to roll again (Y/N)?:" << endl;
        cin>> in;
    }
    
    // if answered yes, call dice function, read result, and take appropriate action    
    if(in == "y" || in == "Y"){
        dice = rollDice();
        
        // define turn total as 0 and end turn
        if(dice==1 || dice==6){
            cout<<"You rolled a " << dice << endl;
            humTurnTotal = 0;
            cout<<"Your turn total is " << humTurnTotal << endl;
            goto end;
        }
        // define turn total as 15 and end turn
        else if(dice==3){
            cout<<"You rolled a " << dice << endl;
            humTurnTotal = 15;
            cout<<"Your turn total is " << humTurnTotal << endl;
            goto end;
        }
        //add the rolled value to turn total and ask if they want to roll again
        else if(dice==2 || dice==4 || dice==5){
            cout<<"You rolled a " << dice << endl;
            humTurnTotal = humTurnTotal += dice;
            cout<<"Your turn total is " << humTurnTotal << endl;
            rollsTotal++;
            goto rolls;
        }
    }
    //if no, end turn
    else if(in == "n" || in == "N"){
        goto end;
    }
    
    end:
    return humTurnTotal;
}


int computerTurn(){
    //define and reset all necessary variables
    int computerTurnTotal = 0;
    int dice;
    cout<<"\n";
    cout<<"It is now computer's turn" << endl;
    cout<<"\n";
    
    //computer will keep rolling until it either ends its turn or reaches a total of at least 10
    while(computerTurnTotal<10){
        dice = rollDice();
        
        //define turn total as 0 and end turn
        if(dice==1 || dice==6){
            cout<<"Computer rolled a " << dice << endl;
            computerTurnTotal = 0;
            cout<<"Computer turn total is " << computerTurnTotal << endl;
            goto end;
        }
        //define turn total as 15 and end turn
        else if(dice==3){
            cout<<"Computer rolled a " << dice << endl;
            computerTurnTotal = 15;
            cout<<"Computer turn total is " << computerTurnTotal << endl;
            goto end;
        }
        //add rolled value to turn total and roll again
        else if(dice==2 || dice==4 || dice==5){
            cout<<"Computer rolled a " << dice << endl;
            computerTurnTotal = computerTurnTotal += dice;
            cout<<"Computer turn total is " << computerTurnTotal << endl;
        }
    }
    end:
    return computerTurnTotal;
}


//takes an input of the players' total scores and displays them at the end of each turn
int endTurn(int n, int x){
    
    cout<<"computer: " << x << endl;
    cout<<"human: " << n << endl;
    return 0;
}

/**
 * game 
 * driver function to play the game
 * the function does not return any value
 */

void game(){
    cout<<"Welcome to Jeopardy Dice!" << endl;
    int computerTotal, humanTotal;
    
    
    //set starting totals to 0 when the game starts
    computerTotal = 0;
    humanTotal = 0;
    
    turn:
    //check to see that neither player has 100 points before starting each turn
    if(computerTotal<100 && humanTotal<100){
            humanTotal = humanTotal += humanTurn();
            endTurn(humanTotal, computerTotal);
    }
    //check to see that neither player has 100 points before starting each turn
    if(computerTotal<100 && humanTotal<100){
            computerTotal = computerTotal += computerTurn();
            endTurn(humanTotal, computerTotal);
            goto turn;
    }
    //if one has more than 100 points, display the appropriate winning message depending on who won
    else if(computerTotal>=100 || humanTotal>=100){
        if(computerTotal>humanTotal){
            cout<<"\nCongratulations! computer won this round of jeopardy dice!";
        }
        else if(computerTotal<humanTotal){
            cout<<"\nCongratulations! human won this round of jeopardy dice!";
        }
    }
}


int main(){
    //start the game!
    game();
    return 0;
}