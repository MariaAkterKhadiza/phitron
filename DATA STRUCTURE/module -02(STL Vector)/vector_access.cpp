#include <bits\stdc++.h>
using namespace std;
int main()
{
       vector<int> v={1,2,3,4,5};
       vector<int> :: iterator it;
       for(auto it=v.begin();it<v.end(); it++)
       {
        cout<< *it <<endl;
       }
     //  cout<<v.back();//last element
    // cout<<v[0]; //first element
   
    return 0;
}