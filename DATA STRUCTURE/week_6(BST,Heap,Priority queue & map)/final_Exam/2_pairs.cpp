#include <bits\stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;

       map<string,vector<int>>m;

       for(int i=0;i<n;i++)
       {
        string s;
        int num;
        cin>>s>>num;
        m[s].push_back(num);
       }

       for(auto pair_key_valu : m)
       {
        sort(pair_key_valu.second.begin(),pair_key_valu.second.end());
        reverse(pair_key_valu.second.begin(),pair_key_valu.second.end());

        for(int num : pair_key_valu.second)
        {
            cout<<pair_key_valu.first<<" "<<num<<endl;
        }
       }

    return 0;
}