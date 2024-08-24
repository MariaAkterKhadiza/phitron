#include <bits\stdc++.h>
using namespace std;
int main()
{
      list<int> myList = {10,20,30,30,30,40,50};
      
     replace(myList.begin(),myList.end(),30,100);
      for(int val : myList)
      {
        cout<< val <<endl;
      }

    return 0;
}