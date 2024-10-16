#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
ll n;

int dp[100005];

bool recur(ll num){
    if(num > n) return false;
    if(num == n) return true;

   if(dp[num] != -1) return dp[num];

   return dp[num] = recur(1LL*num*2) ||  recur(num + 3);
   
}

void naruto(){
    
    cin >> n;
    

    for(int i = 0; i<=n; i++) dp[i] = -1;

    bool ans = recur(1);
    if(ans) cout << "YES" << endl;
    else cout << "NO" <<endl;
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