#include <bits\stdc++.h>
using namespace std;
int main()
{
      list<int> myList = {10,20,30,40,50};
      
      myList.push_back(100);
    //   myList.push_front(300);
    //  myList.pop_back();
    //  myList.pop_front();
      for(int val : myList)
      {
        cout<< val <<endl;
      }

    return 0;
}