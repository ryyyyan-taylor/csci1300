#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string checkFile(string filename){
    
    ifstream file (filename);
    
    if(file.is_open()){
        return "true";
    }
    else{
        return "false";
    }
}

int main(){
    
    string testfile = "text.txt";
    cout<< checkFile(testfile);
}