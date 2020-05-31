#include <iostream>
using namespace std;

int printDiamond(int n){
  int c, k, space = 1;
  space = n - 1;
 
  for (k = 1; k<=n; k++){
    for (c = 1; c<=space; c++)
      cout<<" ";
 
    space--;
 
    for (c = 1; c<= 2*k-1; c++)
      cout<<"*";
 
    cout<<"\n";
  }
 
  space = 1;
 
  for (k = 1; k<= n - 1; k++){
    for (c = 1; c<= space; c++)
      cout<<" ";
 
    space++;
 
    for (c = 1 ; c<= 2*(n-k)-1; c++)
      cout<<"*";
 
    cout<<"\n";
  }
}

int main(){
    int test = 4;
    printDiamond(test);
}