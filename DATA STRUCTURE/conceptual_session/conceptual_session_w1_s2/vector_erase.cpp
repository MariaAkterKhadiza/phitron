#include <bits\stdc++.h>
using namespace std;
int main()
{
        vector<int> v={10,20,30,40,50};
        // v.erase(v.begin()+2); //single value
         v.erase(v.begin()+1,v.begin()+4);// multiple value
        for(int i=0; i<v.size();i++)
       {
        cout<<v[i] <<endl;
       }

    return 0;
}