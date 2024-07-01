#include <bits\stdc++.h>
using namespace std;
int main()
{
      list<int> myList = {10,20,30,40,50,60,70,80};
      auto it =find(myList.begin(),myList.end(),60);
      if(it == myList.end())
      {
        cout<<"not found";
      }
      else
      {
        cout<<"Found";
      }

    return 0;
}