#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t ; cin >> t ; while(t--){
        string s;
        cin >> s;

        int cns = 0, vowl = 0, dgt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '1' && s[i] <= '9')
                dgt++;
            else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowl++;
            }
            else
                cns++;
        }
        int total1 = INT_MAX,total2 = INT_MAX,total3 = INT_MAX;
        total1 = (cns + 2) / 3;
        total2 = (vowl + 1) / 2;
        total3 = dgt;

        vector<int>v{total1,total2,total3} ;
        int mnbx = INT_MAX ;
        for(int i=0; i<3; i++)
        {
            if(v[i] > 0) mnbx = min(mnbx,v[i]) ;
        }

        cout << mnbx << "\n";
    }

    return 0;
}