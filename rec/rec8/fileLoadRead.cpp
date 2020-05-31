#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int fileLoadRead(string filename){
    int lines = 0;
    string line = "";
    
    ifstream file (filename);
    
    if(file.is_open()){
        
        while(getline(file,line)){
            
            lines++;
        }
    }
    
    else{
        lines = -1;;
    }
    
    
    file.close();

    return lines;
}

int main(){
    
    string testfile = "books.txt";
    cout<<fileLoadRead(testfile);
    
}