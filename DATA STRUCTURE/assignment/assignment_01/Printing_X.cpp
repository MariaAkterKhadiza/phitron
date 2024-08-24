#include <bits\stdc++.h>
using namespace std;
int main()
{
       int N;
       cin>>N;
       int D = N/2;
       int a[N-1][N-1];
  for(int i=0; i<N; i++)
     {
        for(int j=0; j<N; j++)
        {
            if(i==j && i+j !=(N-1))
            {
                cout<<"\\";
            }
            else if(i==j && i+j == (N-1))
            {
               cout<<"X";
            }
            else if(i+j==N-1 && i != j)
            {
                cout<<"/";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}