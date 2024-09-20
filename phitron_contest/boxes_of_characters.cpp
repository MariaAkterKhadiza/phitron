#include <bits/stdc++.h>

using namespace std;

signed main()
{

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string s;
        cin >> s;
        int l = s.size();
        int cntv = 0, cntc = 0, cntd = 0;

        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cntv++;
            else if (isdigit(s[i]))
                cntd++;
            else
                cntc++;
        }

        int ac = (cntc + 2) / 3;
        int ad = cntd;
        int av = (cntv + 1) / 2;

        cout << max({ac, ad, av}) << endl;
    }
    return 0;
}