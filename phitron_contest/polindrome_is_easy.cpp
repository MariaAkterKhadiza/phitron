#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;

    string s;
    cin >> s;

    cin >> q;

    vector<vector<int>> pf(n + 1, vector<int>(26, 0));

    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < 26; ++j)
        {
            pf[i + 1][j] = pf[i][j];
        }

        pf[i + 1][s[i] - 'a']++;
    }

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        l--, r--;

        vector<int> freq(26, 0);
        for (int i = 0; i < 26; ++i)
        {
            freq[i] = pf[r + 1][i] - pf[l][i];
        }

        int oddcnt = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (freq[i] % 2 != 0)
            {
                oddcnt++;
            }
        }

        if (oddcnt / 2 <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}