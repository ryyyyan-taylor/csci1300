#include <iostream>
#include <string>
using namespace std;

int getDigitCount(string input){
    int digits = 0;
    
    if(input.empty()){
        return 0;
    }
    
    for(int i=0; i<input.length(); i++){
        if(isdigit(input[i])){
             digits++;
        }
    }
    return digits;
}

int main(){
    string test = "777";
    cout<<getDigitCount(test);
}