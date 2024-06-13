#include <bits\stdc++.h>
using namespace std;
class student
{
    public:
       int roll;
       int cls;
       double gpa;
       student(int r,int c,double g)
       {
        // roll = r;
        // cls = c;
        // gpa = g;
        
        //proper this use process
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
        //shortcut
        this->roll = roll;
        this->cls =  cls;
        this->gpa = gpa;

       }
};
int main()
{
    student mariya(30,9,5.01); 
    student karima(45,10,4.01);  
    cout << mariya.roll << " " << mariya.cls << " " <<mariya.gpa << endl;
    cout << karima.roll << " " << karima.cls << " " <<karima.gpa << endl;

    return 0;
}