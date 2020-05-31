#include <iostream>
using namespace std;

int printTwoDArray(int array[][5], int length){
    if(length == 0){
        cout<<"0";
    }
    if(length < 0){
        cout<<"-1";
    }
    for(int i = 0; i < length; i++){
        
        for(int j = 0; j < 5; j++){
            if(j == 4){
                cout<<array[i][j];
            }
            else{
            cout<<array[i][j]<<",";
            }
        }
    cout<<endl;
    }
}

int main(){
    int testarray[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    int testlength = 3;
    printTwoDArray(testarray, testlength);
}