#include <iostream>
using namespace std;

double calcPay(double rate, double hours){
    double totalPay;
    if(hours>40){
        int overtime = hours-40;
        totalPay = (40*rate)+(overtime*(rate*1.5));
    }
    
    if(hours >= 0 && hours <= 40){
        totalPay = hours*rate;
    }
    
    if(rate < 0 || hours < 0){
        totalPay == -1;
        cout << "Pay rate and hours worked cannot be negative values.";
    }

    return totalPay;
}