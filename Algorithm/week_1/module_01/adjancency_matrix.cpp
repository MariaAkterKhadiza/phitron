#include <bits\stdc++.h>
using namespace std;
int main()
{
       int n,e;
       cin>>n>>e;\

       int mat[n][n];
       memset(mat,0,sizeof(mat));
    //    for(int i=0; i<n; i++)
    //    {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<mat[i][j] <<" ";
    //     }
    //     cout<<endl;
    //    }

       while(e--)
       {
        int a,b;
        cin>>a>>b;
          mat[a][b] = 1;
          mat[b][a] =2;
       }

       if(mat[3][0] == 1)
       {
        cout<<"connected";
       }
       else
       {
        cout<<"Not connected";
       }

    return 0;
}