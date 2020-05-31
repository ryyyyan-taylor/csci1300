#include <iostream>
using namespace std;

int printSquares(int n){
    int height = 1;
    int width = 1;
    int openHeight = 1;
    
    for(n; height<=n; height++){
        for(width=1; width<=n; width++){
            cout<<"*";
        }
            cout<<" ";
            
            if(height==1 || height==n){
                for(width=1; width<=n; width++){
                    cout<<"*";
                }
            }
            else
                for(width=1; width<=n; width++){
                    if(width==1 || width==n){
                        cout<<"*";
                    }
                    else
                        cout<<" ";
                }
    
        cout<<"\n";
    }
}

int main(){
    int test = 20;
    printSquares(test);
}