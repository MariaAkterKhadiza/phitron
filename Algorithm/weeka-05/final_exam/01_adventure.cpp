#include <bits/stdc++.h>
#define FIO                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

using namespace std;
 int dp[1003][1003];

int n;
int final_w;


int knapsack(int idx, int value[], int weight[], int x) {
    
    if (idx == n || x > final_w) return 0;
    if(dp[idx][x] !=-1) return dp[idx][x];

    
    int op1 = 0;
    if (x + weight[idx] <= final_w) {
        op1 = knapsack(idx + 1, value, weight, x + weight[idx]) + value[idx];
         
    }

  
    int op2 = knapsack(idx + 1, value, weight, x);
    

     

           return dp[idx][x]= max(op1, op2);


   
    
}

void naruto() {
    cin >> n;
    cin >> final_w;
   

    int value[n];
    int weight[n];

    for (int i = 0; i < n; i++) {
        cin >> weight[i] ;
    }

    for (int i = 0; i < n; i++) {
        cin >> value[i] ;
    }
    
    for (int i = 0; i <= n; i++) {
        for(int j = 0; j<=final_w ; j++){
        dp[i][j] = -1;
        }
    }



   
    int ans = knapsack(0, value, weight, 0);
    cout << ans << endl;
}

int main() {
    FIO;
    int t; cin >> t;
    while(t--)
    naruto();
    return 0;
}