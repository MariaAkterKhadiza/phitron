#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] & 1) odd.push_back(v[i]);
        else even.push_back(v[i]);
    }

    sort(even.rbegin(), even.rend());
    sort(odd.rbegin(), odd.rend());

    int maxodd = 0, maxeven = 0;

    if (odd.size() >= 2) {
        maxodd = odd[0] + odd[1];
    }

    if (even.size() >= 2) {
        maxeven = even[0] + even[1];
    } else if (!even.empty()) {
        maxeven = even[0];
    }

    cout << max(maxodd, maxeven) << endl;

    return 0;
}