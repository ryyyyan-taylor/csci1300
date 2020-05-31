#include <iostream>
#include <string>
using namespace std;


int getLastIndex(char n, string input){
    int index = -1;
    
    for(int i =0; i<input.length(); i++){
        
        if(input[i] == n){
            index = i;
        }
    }
    return index;
}

int main (){
    string test_in = "apple";
    char test_n = 'p';
    cout<<getLastIndex(test_n,test_in);
}