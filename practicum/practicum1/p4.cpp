#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int largestNumber(double x, double y, double z){
    double result;
    
    if(x>=y && x>=z){
        result = x;
    }
    
    else if(y>=x && y>=z){
        result = y;
    }
    
    else if(z>=x && z>=y){
        result = z;
    }
    
    return result;
}

int main(){
    double testx = 10;
    double testy = 12.5;
    double testz = 62.5;
    largestNumber(testx,testy,testz);
    cout<<result;
}