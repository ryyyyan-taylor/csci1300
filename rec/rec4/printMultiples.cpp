#include <iostream>
using namespace std;

int printMultiples(int n, int m){
    int new_n = n;
    while(new_n<=m){
        cout<<new_n<<endl;
        new_n = new_n + n;
    }
}

int main(){
    int testn = 7;
    int testm = 60;
    printMultiples(testn,testm);
}