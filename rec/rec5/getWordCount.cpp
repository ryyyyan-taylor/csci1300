#include <iostream>
#include <string>
using namespace std;

int getWordCount(string sentence){
    int words = 1;
    
    if(sentence.empty()){
    	return 0;
    }
    
    for(int i = 0; i<sentence.length(); i++)
	{
		if (sentence[i] == ' ')
		{
			words++;
		} 		
	}
	return words;
}

int main(){
	string test = "hello there world";
	cout<<getWordCount(test);
}