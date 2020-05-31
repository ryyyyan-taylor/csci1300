#include <iostream>
#include <string>
using namespace std;

int CountLower(string input){
    int lower = 0;
    
    for(int i=0; i<input.length(); i++){
        if(islower(input[i])){
            lower++;
    
        }
    }
    
    return lower;
}

int main(){
    string test = "There Are Six Capital Letters Here";
    cout<<CountLower(test);
}