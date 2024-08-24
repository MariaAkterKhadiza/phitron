#include <bits\stdc++.h>
using namespace std;
int main()
{
      list<int> myList = {10,20,30,40,50};
      
    // myList.erase(next(myList.begin(),2));//single number
     myList.erase(next(myList.begin(),2),next(myList.begin(),5));
      for(int val : myList)
      {
        cout<< val <<endl;
      }

    return 0;
}