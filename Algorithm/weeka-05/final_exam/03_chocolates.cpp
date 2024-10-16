#include <bits/stdc++.h>
using namespace std;

void naruto() {
    int n;
    cin >> n;

    vector<int> chocolates(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> chocolates[i];
        sum += chocolates[i];
    }

    if (sum % 2 != 0) {
        cout << "NO" << '\n';
        return;
    }

    int target = sum / 2;
    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; i++) {
        for (int j = target; j >= chocolates[i]; j--) {
            dp[j] = dp[j] || dp[j - chocolates[i]];
        }
    }

    if (dp[target]) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        naruto();
    }

    return 0;
}
