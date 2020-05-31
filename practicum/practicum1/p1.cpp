#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int waterBill(double gu,double lul){
    double total;
    
    if(gu>0 && gu<=lul){
        total = gu * 0.012;
    }
    
    else
        total = gu * 0.018;
        
    cout<<total;
    return total;
}

int main(){
    int testgu = 2738;
    int testlul = 4129;
    waterBill(testgu, testlul);
}