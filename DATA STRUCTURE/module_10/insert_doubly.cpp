#include <bits\stdc++.h>
using namespace std;
int main()
{
      list<int> myList = {10,20,30,40,50};
      // list<int>newList = {100,200,300,400,500};
   vector<int> v ={60,70,80};
    // myList.insert(next(myList.begin(),2),100);//single inserting
    // myList.insert(next(myList.begin(),2),{100,200,300});//multiple inserting
    //  myList.insert(next(myList.begin(),2),newList.begin(),newList.end());  // list theke inserting
    myList.insert(next(myList.begin(),2),v.begin(),v.end());
      for(int val : myList)
      {
        cout<< val <<endl;
      }

    return 0;
}