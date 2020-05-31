#ifndef USER_H_
#define USER_H_
#include <string>
using namespace std;

class User{
    
    private:
        
        string username;
        int ratings[200];
        int numRatings;
        int size;
        
    public:
        
        User();
        User(string, int[], int);
        string getUsername();
        void setUsername(string);
        int getRatingAt(int);
        bool setRatingAt(int, int);
        int getNumRatings();
        void setNumRatings(int);
        int getSize();
};

#endif