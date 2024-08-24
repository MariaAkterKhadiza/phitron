

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
     int T;
    cin >> T;
    while(T--){

    int N;
    cin >> N;
    vector<int>v(N);
    vector<int>v1(N);
    for(int i=0;i<N;i++)
    {
        cin>>v[i];
    }
    v1=v;
    sort(v1.begin(),v1.end());
    if(v1==v)
     {
      cout<<"YES"<<endl;
     }
    else
    {
       cout<<"NO"<<endl;
    }
    }
  return 0;
}