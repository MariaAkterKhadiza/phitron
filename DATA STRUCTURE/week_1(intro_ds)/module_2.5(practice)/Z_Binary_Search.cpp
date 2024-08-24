#include <bits\stdc++.h>
using namespace std;
int main()
{
       int n,q;
       cin>>n>>q;
       int a[n];
       for(int i=0; i<n; i++)
       {
        cin>>a[i];
       }

     while(q--)
     {
        int q_value;
        cin>>q_value;
         int flag = 0;

         int(int i=0; i<n; i++)
         {
            if(a[i]==q_value)
            {
                flag = 1;
            }
         }
         if(flag)
         {
            cout<<"found"<<endl;
         }
         else
         {
            cout<<"not found"<<endl;
         }
     }
    return 0;
}