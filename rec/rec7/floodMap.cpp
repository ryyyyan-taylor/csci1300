#include <iostream>
using namespace std;

int floodMap(double map[][4], int rows, double level){
    
    for(int i = 0; i < rows; i++){
        
        for(int j = 1; j <= 4; j++){
            
            if(map[i][j] < level){
                cout<<"_";
            }
            else{
                cout<<"*";
            }
        }
    }
}

int main(){
    int testrows = 1;
    double testlevel = 6.0;
    double testmap[1][4] = {{5.0, 7.6, 3.1, 292}};
    floodMap(testmap, testrows, testlevel);
}