#include <bits\stdc++.h>
using namespace std;
int main()
{
      int n,m;
      cin>>n >>m;
       vector<int> a[n];
       for(int i=0; i<n; i++)
       {
        cin>>a[i];
       }

       vector<int> b[m1];
       for(int i=0; i<m; i++)
       {
        cin>>b[i];
       }
       int x;
       cin>>x;

       a.insert(a.begin()+x,b.begin(),b.end());
       for(int i=0; i<a.size();i++)
       {
        cout<<a[i] <<" ";
       }

    return 0;
}