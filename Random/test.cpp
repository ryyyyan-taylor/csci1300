#include <iostream>
using namespace std; 
  
int GasBill(float n){
    float total;

    if(n>0, n<=100){
        total = n *1.23;
    }
    
    if(n>100, n<=200){
        total = 123 + ((n-100)*1.14);
    }
    
    if(n>200){
        total = 123 + 114 + ((n-200)*1.08);
    }
    
    cout<< setprecision(2) << fixed << total;
}

int main(){
    int test = 143;
    GasBill(test);
}