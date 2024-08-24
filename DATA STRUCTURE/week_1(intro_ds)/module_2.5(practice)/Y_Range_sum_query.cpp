// #include <bits\stdc++.h>
// using namespace std;
// int main()
// {
//    int n,q;
//    cin>> n,q;
//    int a[n];

//    for(int i=0; i<n; i++) 
//    {
//     cin>>a[i];
//    } 
//    while(q--)
//    {
//     int start_index;
//     int end_index;
    
//     cin>> start_index >>end_index;

//     int sum = 0;
//     for(int i=start_index-1; i<end_index;i++)
//     {
//         sum+=a[i];
//     }
//     cout<<sum<<endl;
//    }  

//     return 0;
// }


#include <bits\stdc++.h>
using namespace std;
int main()
{
      long long  n,q;
       cin>>n>>q;
      long long a[n];
       for(int i=0; i<n; i++)
       {
        cin>>a[i];
       }
         int pre[n];
         pre[0] =a[0];
         for(int i=1; i<n; i++)
         {
            pre[i]=a[i]+pre[i-1];
         }

    while(q--)
    {
      long long l,r;
        cin>>l>>r;
        l--;
        r--;
       long long sum;
        if(l==0) sum=pre[r];
        else sum=pre[r]-pre[l-1];
         cout<<sum<<endl;
    }
    return 0;
}