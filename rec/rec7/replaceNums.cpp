#include <iostream>
using namespace std;

void replaceNums(int array[], int length){
    
    int temp = array[0]; 
    int x; 
    
    for (int i = 0; i < length; i++){
        
        x = temp;
        
        if(i == 0 || i == length){
            array[i]=array[i];
            continue;
        }
        
        else if(array[i+1] > x){
            x = array[i+1];
        }
        
        
        temp = array[i];
        array[i] = x;
        cout<<array[i]<<" ";
    }
}

int main(){
     
    int testArray[5] = {5, 4, 3, 2, 1};
    int testLength = 5;
    replaceNums(testArray, testLength);
    
}