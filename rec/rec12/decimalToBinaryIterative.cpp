#include <iostream>
using namespace std;

string decimalToBinaryIterative(int n) {
    int binaryNum[1000];
    string binary = "";
    int i = 0; 
    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    }
    
    for (int j = i - 1; j >= 0; j--){
        if(binaryNum[j] == 1){
            binary += "1";
        }
        else if(binaryNum[j] == 0){
            binary += "0";
        }
    }
    return binary;
} 

int main(){
    int test = 5;
    cout<<decimalToBinaryIterative(test)<<endl;
    return 0;
}