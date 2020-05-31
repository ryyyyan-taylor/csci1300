#include <iostream>
using namespace std;

int numbersign(int n){
    if (n > 0){
        cout<<"\n positive";
    }
    if (n < 0){
        cout<<"\n negative";
    }
    if (n == 0){
        cout<<"\n zero";
    }
}

int main(){
    int test = 5;
    numbersign(test);
    test = -4;
    numbersign(test);
    test = 0;
    numbersign(test);
}