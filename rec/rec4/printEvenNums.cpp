#include <iostream>
using namespace std;

int printEvenNums(int n){
    int x=2;
    while(x<=n){
        cout<<x<<endl;
        x = x+2;
    }
}

int main(){
    int test = 200;
    printEvenNums(test);
}