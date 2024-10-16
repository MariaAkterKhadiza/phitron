#include <bits/stdc++.h>
using namespace std;
 int n, m;
 int dp[1001][1001];

bool recur(int idx, int add[], int need, int ache){
    if(ache == need) return true;
    if(idx > n-1) return false;
    if(ache > need) return false;

    if(dp[idx][ache] != -1) return dp[idx][ache];
    
     bool  op1 =recur( idx + 1,  add, need, ache + add[idx]);
    
    
    bool op2 = recur(idx +1, add, need, ache);

    return dp[idx][ache]= op1 || op2;

}


void naruto(){
        cin >> n >> m;
        int add[n];
        for(int i =0; i<n; i++) cin >> add[i];
        memset(dp, -1, sizeof(dp));

        if(m == 1000) {cout <<"YES"<<'\n';return;}
        bool ans = recur(0, add, 1000 - m, 0 );

        if(ans) cout <<"YES"<<'\n';
        else cout <<"NO"<<'\n';
    }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t; cin >> t;
    while(t--){
        naruto();
    }

    return 0;
}