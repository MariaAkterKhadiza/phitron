#include <bits\stdc++.h>
using namespace std;
int main()
{     // single value
    //    vector<int> v={10,20,30,40,50};
    //    v.insert(v.begin()+3,5,35);

    //    for(int i=0; i<v.size();i++)
    //    {
    //     cout<<v[i] <<endl;
    //    }

    // multiple value

     vector<int> v={10,20,30,40,50};
     vector<int> v2={100,200,300,400,500};
       v.insert(v.end(),v2.begin(),v2.end());

       for(int i=0; i<v.size();i++)
       {
        cout<<v[i] <<endl;
       }

    return 0;


   //    insert function
    //    vector.insert(pos, val)
    //    vector.insert(pos, times, val)
    //    vector.insert(pos, start, end)
}