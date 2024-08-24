#include <bits/stdc++.h>
using namespace std;
int main()
{
       
      list<int> mylist ={10,20,10,10,30,40,50,60,};
    //  mylist.remove(10);//remove all 10
     
     // sorted//
    // mylist.sort();//forward sort
    // mylist.sort(greater<int>());//reverse sort
      // mylist.unique();

      mylist.reverse();//reverse korar jonno
      for(int val : mylist)
       {
        cout<< val <<endl;
       }
    return 0;
}