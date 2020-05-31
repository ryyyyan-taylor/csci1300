#include <iostream>
using namespace std;

int main (){
    beginning:
    cout << "Would you like to fight the villain (1), save the citizen (2), or return to your base (3)?" <<endl;
    
    int choice;
    cin>>choice;
    
    if (choice==1){
        cout << "You Win!" <<endl;
        goto beginning;
    }
    
    if (choice==2){
        cout << "You saved the citizen." <<endl;
        goto beginning;
    }
    
    if (choice==3){
        cout << "Who will save the world?" <<endl;
        goto end;
    }
    
    end:
    return 0;
}