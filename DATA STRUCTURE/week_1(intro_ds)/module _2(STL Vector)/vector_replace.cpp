#include <bits\stdc++.h>
using namespace std;
int main()
{  // replace
    //    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    //    replace(v.begin(),v.end()-1,2,100);
    //    for(int x:v)
    //    {
    //     cout<<x<<endl;
    //    }

    //find
    vector<int> v={1,2,3,3,4,5,6,7,8,9,10};

    //find(v.begin(),v.begin(),3);

    //vector<int>:: iterator it;
    //auto it;
   auto it = find(v.begin(),v.end(),100);
     if(it == v.end())
     {
        cout<<"not found";
     }
     else
     {
        cout<<"found";
     }

    return 0;
}