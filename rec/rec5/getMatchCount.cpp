#include <iostream>
#include <string>
using namespace std;

int getMatchCount(string &pat, string &txt) { 
    int M = pat.length(); 
    int N = txt.length(); 
    int res = 0; 
    
    if(txt.empty() || pat.empty()){
        return -1;
    }
    
    if(pat.length()>txt.length()){
        return -2;
    }
    
    for (int i = 0; i <= N - M; i++){  
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        if (j == M){ 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
}

int main(){
    string test_in = "mississippi";
    string test_m = "is";
    cout<<getMatchCount(test_m, test_in);
}