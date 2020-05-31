#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int getLinesFromFile(string file, int array[], int length){
    
    ifstream myfilestream;
    myfilestream.open(file);
    
    if(myfilestream.is_open()){
         
        string line;
        int linenum;
        
        while(! myfilestream.eof() ){
            
            getline(myfilestream, line);
            int value = stoi(line);
            array[linenum] = value;
            linenum++;
        }
    
    return length;
    myfilestream.close();        
    
    }
    
    else{
        cout << "file open failed" << endl;
    }
}

int main(){
    
    string testfile = "file.txt";
    int testarray[4];
    int testlength = 4;
    getLinesFromFile(testfile, testarray, testlength);
    
}