#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main()
{
      int T;
       cin>>T;
       while(T--)
       {
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>v1(n);

        for(int i=0; i<n; i++)
        {
          cin>>v[i];
            v1[i]=v[i];
        }
        
       }
       //v1=v;
       sort(v1.begin(),v1.end());
       if(v1==v)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }

    return 0;
}
