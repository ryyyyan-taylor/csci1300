#include <iostream>
using namespace std;

string decimalToBinaryRecursive(int n){
    int remain;
    string binary = "";
    remain = n%2;
    if(n>0){
        if(remain == 1){
            binary += "1";
        }
        else if(remain == 0){
            binary += "0";
        }
        decimalToBinaryRecursive(n/2);
    }
    return binary;
}

int main(){
    int test = 8;
    cout<<decimalToBinaryRecursive(test)<<endl;
}