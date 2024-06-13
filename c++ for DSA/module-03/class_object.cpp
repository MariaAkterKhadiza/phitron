#include <bits\stdc++.h>
using namespace std;
class student
{
  public:
     char name[100];
     int roll;
     double cgpa;
};
int main()
{
       student a,b;
       cin.getline(a.name,100);
       cin>> a.cgpa >>a.roll;
       getchar();
       cin.getline(b.name,100);
       cin>> b.cgpa >>b.roll;
       cout << a.name << " " << a.cgpa <<" " << a.roll << endl;
       cout << b.name << " " << b.cgpa <<" " << b.roll << endl;
    return 0;
}