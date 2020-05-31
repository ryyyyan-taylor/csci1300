#include<iostream>

using namespace std;

class Person
{
    private:
        string name;
        string address;
        double gpa;
        int praticum_scores[4];
        
    public:
        Person()
        {
            
        }
        Person(string s)
        {
            name=s;
        }
        string getName()
        {
            return name;
        }
        void setName(string s)
        {
            name=s;
        }
        
        double getGpa()
        {
            return gpa;
        }
        void setGpa(double x)
        {
            gpa = x;
        }
        void setPracticum(int array[],int len)
        {
            for(int i=0;i<len;i++)
                praticum_scores[i] = array[i];
        }
        
        void calcGPA()
        {
            double total=0;
           for(int i =0 ;i<4;i++) 
                total += praticum_scores[i];
            gpa = (double)total/4;
        }   
};

int main()
{
    // Person p("John");
    // cout<< p.getName();
    
    // Person w;
    // w.setName("William");
    // cout<<w.getName();
    
    int pract[] = {100,50,75,89};
    Person p1("ashwin");
    p1.setPracticum(pract,4);
    p1.calcGPA();
    cout<<"The gpa is : "<<p1.getGpa();
    
    int pract1[] = {100,100,100,100};
    Person p2("telly");
    p2.setPracticum(pract1,4);
    p2.calcGPA();
    cout<<"\nThe gpa of "<<p2.getName()<<" is : "<<p2.getGpa();
    
    
    Person rec105[48];
    for(int i =0;i<48;i++)
    {
        Person p("telly");
        // p.setPracticum(pract1,4);
        // p.calcGPA();
        cout<<"\nThe gpa of "<<p.getName()<<" is : "<<p.getGpa();
        rec105[i] = p;
        rec105[i].setPracticum(pract1,4);
        rec105[i].calcGPA()
    }
    
    cout<< books[0].getAuthor();
    cout<< books[2].getTitle();
    cout<< books[1].setTitle("harry");
}