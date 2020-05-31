#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int sumOfPositiveOdd(string filename, int nums[], int length){
    
    ofstream file (filename);
    
    if(file.is_open()){
        
        int total = 0;
        
        for(int i=0; i<length; i++){
            
            if(nums[i]>0){
                if(nums[i] % 2 > 0){
                    total = total + nums[i];
                }
            }
        }
        
        file<<total<<endl;
        
        return 1;
    }
    
    else{
        return -1;
    }
    
}

int main(){
    
    string testfile = "text.txt";
    int testnums[] = {1,2,-3,4,5};
    int testlength = 5;
    
    sumOfPositiveOdd(testfile, testnums, testlength);
    
}