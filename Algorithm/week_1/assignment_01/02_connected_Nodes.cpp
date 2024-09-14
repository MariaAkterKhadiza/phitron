#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
vector<int> mat[1005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nodes, edges;
    cin >> nodes >> edges;

    while (edges--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int qureies;
    cin >> qureies;

    while (qureies--)
    {
        int src;
        cin >> src;
        vector<int> v;
        for (auto &&i : mat[src])
        {

            v.push_back(i);
        }
        if (v.size() == 0)
            cout << -1 << endl;
        else
        {
            sort(v.rbegin(), v.rend());
            for (auto &&i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}