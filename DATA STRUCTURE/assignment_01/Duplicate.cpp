#include <bits\stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;
       vector<long long> v(n);
    
       for(int i=0; i<n; i++)
       {
        cin>>v[i];
       }
      
      sort(v.begin(),v.end());

        int found = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i] == v[i-1])
            {
                found = 1;
                break;
            }
        }

        if(!found)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    return 0;
}