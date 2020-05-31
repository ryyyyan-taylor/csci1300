#include <iostream>
#include <cstring>
#include "User.h"
using namespace std;

User::User(){
    username = "";
    numRatings = 0;
    size = 200;
    for(int i = 0; i<200; i++){
        ratings[i] = -1;
    }
}

User::User(string inname, int inrate[], int inTotalRatings){
    username = inname;
    memcpy(ratings, inrate, sizeof(ratings));
    numRatings = inTotalRatings;
}

string User::getUsername(){
    return username;
}

void User::setUsername(string u){
    username = u;
}

int User::getRatingAt(int index){
    if(index<size){
        return ratings[index];
    }
    else{
        return -1;
    }
}

bool User::setRatingAt(int index_, int value){
    if(index_<size){
        if(value>=0 && value<=5){
            ratings[index_] = value;
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int User::getNumRatings(){
    return numRatings;
}

void User::setNumRatings(int in){
    numRatings = in;
}

int User::getSize(){
    return size;
}