#include <iostream>
using namespace std;

int matrixSum(int array[][2], int size){
    int sum = 0;
    
    for(int i=0; i<size; i++){
        for(int j=0; j<2; j++){
            
            sum = sum + array[i][j];
            
        }
    }
    
    return sum;
}

int main(){
    
    int testarray[][2] = {{3,4},{78,98},{12,-11},{1909,4}};
    int testsize = 4;
    
    cout<<matrixSum(testarray, testsize);
    
}