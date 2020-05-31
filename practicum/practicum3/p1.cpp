#include <iostream>
#include <string>
using namespace std;

void printIneligibleAthletes(string athletes[], float ages[], int total){
    
    for(int i=0; i<total; i++){
        if(ages[i]>18 || ages[i]<14){
            
            cout<<athletes[i]<< ", " << ages[i] << endl;
        }
        
    }
}

int main(){
    
    string testa[] = {"Chloe Kim", "Ryan Tylor", "Bob Joseph", "Schmidt"};
    float testages[] = {14, 15, 56, 30};
    int testtot = 4;
    
    printIneligibleAthletes(testa, testages, testtot);
}