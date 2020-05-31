#include <iostream>
using namespace std;

int checkLeapYear(int year){
    int result = 0;
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                result = 1;
            }
            else
                result = 0;
        }
        else
            result = 1;
    }
    else
        result = 0;
cout<<result;
}

int main(){
    int test = 1500;
    checkLeapYear(test);
}