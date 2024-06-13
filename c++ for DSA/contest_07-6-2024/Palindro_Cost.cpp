#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        int k;
        cin >> s >> k;

        int n = s.size();
        for (int i = 0; i < n / 2; i++) 
        {
            int cst = abs(s[i] - s[n - i - 1]);
            k -= cst;
            if (k < 0) 
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (k >= 0)
            cout << "YES" << endl;
    }

    return 0;
}