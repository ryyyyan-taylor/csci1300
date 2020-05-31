#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void printVector(vector<int>& vect)
{
    for(int i=0;i<vect.size();i++)
    {
        cout<<" "<<vect.at(i);
    }
}

void modifyVector(vector<int>& v){
    int n=5;
    
    while(n>0){
        
        cout<<"Please enter an integer value:"<<endl;
        cin>>n;
        
        if(n <= 0){
            n=n;
        }
        else if(n % 5 == 0){
            v.erase(v.begin());
        }
        else if(n % 3 == 0){
            v.pop_back();
        }
        else{
            v.push_back(n);
        }
    }
    
    printVector(v);
}


int main(){
    
    vector<int> testV;
    
    modifyVector(testV);
    
}