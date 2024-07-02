#include <bits/stdc++.h>
using namespace std;
int main()
{
       list<int> mylist = {10,20,30,40,50,60};
       cout<<mylist.front();// head
       cout<<endl;
       cout<<mylist.back();// tail

       cout<<endl;
       cout<<*next(mylist.begin(),3) <<endl;// anynumber 

    return 0;
}