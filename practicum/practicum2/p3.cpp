#include <iostream>
#include <string>
using namespace std;

void rightHalfPyramid(int num){
  int counter = 0;
  for (int i=0; i < num; i++) { 
    for (int j=0; j <= i; j++){ 
          cout << counter % 10;
          cout<< " ";
          counter += 1; 
    } 
    cout << endl;
  }
    
}
  
  int main(){
      rightHalfPyramid(6);
  }