#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <strings>
using namespace std;

const char * cardinalOrientation(int n){
    if(n>315){
        cout<<"North";
    }
    
    else if(n>=0, n<=45){
        cout<<"North";
    }
    
    else if(n>45, n<=135){
        cout<<"East";
    }
    
    else if(n>135, n<=225){
        cout<<"South";
    }
 
    else if(n>225, n<=315){
        cout<<"West";
    }
}

int main(){
    int test = 225;
    cardinalOrientation(test);
}