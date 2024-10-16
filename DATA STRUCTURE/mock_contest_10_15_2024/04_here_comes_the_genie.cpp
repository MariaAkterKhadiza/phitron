#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
     for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());
 long long total = v[0];
    long long prev = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] >= prev)
        {
            v[i] = max(1LL*0, prev - 1);
        }
        total += v[i];
        prev = v[i];
    }

    cout << total << "\n";

    return 0;
}