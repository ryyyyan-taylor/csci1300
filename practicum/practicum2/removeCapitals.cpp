#include <iostream>
#include <string>
using namespace std;

string removeCapitals(string input){
    string output;
    
    for(int i = 0; i < input.length(); i++){
        if(islower(input[i]) || input[i] == ' ' || isdigit(input[i])){
            output = output + input[i];
        }
    }
    return output;
}

int main(){
    string test = "12345";
    cout<< removeCapitals(test);
}