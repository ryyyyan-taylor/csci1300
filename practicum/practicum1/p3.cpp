#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int gameMenu(int n){
    switch(n){
        case 1:
            cout<<"Choice 1: Play Game";
            break;
        case 2:
            cout<<"Choice 2: View Stats";
            break;
        case 3:
            cout<<"Choice 3: Save Game";
            break;
        case 4:
            cout<<"Choice 4: Exit Game";
            break;
        default:
            cout<<"Choice " << n << ": Invalid";
            break;
    }
}

int main(){
    int test = 45;
    gameMenu(test);
}