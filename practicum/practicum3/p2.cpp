#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 int Split (string str, char c, string array[], int size)
 {
    if (str.length() == 0) {
         return 0;
     }
    string word = "";
    int count = 0;
    str = str + c;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
        {
            if (word.length() == 0)
                continue;
            array[count++] = word;
            word = "";
        } else {
            word = word + str[i];
        }
    }
    return count ;
 }
 
 int parseScores(string filename){
     int count = 0;
     
     ifstream file (filename);
     
     if(file.is_open()){
         
         string line = "";
         
         while(getline(file,line)){
             
             char n = ',';
             string aray[4];
             int minscore = 100;
             
             if(line != ""){
                Split(line, n, aray, 10);
             
                for(int i=0; i<3; i++){
                     if(stoi(aray[i])<minscore){
                     minscore = stoi(aray[i]);
                     }
                }
             
                cout<<aray[3]<<": "<<minscore<<endl;
                count++;
             }
         }
     }
     
     else{
         return -1;
     }
     
     return count;
 }
 
 int main(){
     string testfile = "text.txt";
     cout<<parseScores(testfile)<<endl;
     
 }