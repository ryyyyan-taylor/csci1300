#include "Player.h"
#include "Dice.h"

Player::Player(int number){
    nDice = number;
    for (int i = 0; i < nDice; i++){
        Dice d1;
        myDice[i] = d1;
        
    }
}

void Player::setNumDice(int number){
    nDice = number;
}

void Player::playerRoll(){
    
    for(int i=0; i<nDice; i++){
        int temp = myDice[i].roll();
    }
}

int Player::getDiceValueAtIndex(int i) const{
    
    return faceValue;
}