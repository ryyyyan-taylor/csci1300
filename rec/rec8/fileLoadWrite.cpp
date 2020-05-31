#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

int fileLoadWrite(string filename){
    
    ofstream file (filename);
    
    if(file.is_open()){
        for(int i=1; i<=10; i++){
            
            file<<pow(i, 2) << endl;
        }
        
        return 0;
    }
    else{
        return -1;
    }
}

int main(){
    
    string testfile = "text.txt";
    fileLoadWrite(testfile);
    cout<<"done";
}