#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a < b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int newLength = 0;
        for (int i = 0; i < n; i++)
        {
            bool is_duplicate = false;
            for (int j = 0; j < newLength; j++)
            {
                if (a[i] == a[j])
                {
                    is_duplicate = true;
                    break;
                }
            }
            if (!is_duplicate)
            {
                a[newLength] = a[i];
                newLength++;
            }
        };
        sort(a, a + newLength, cmp);
        for (int i = 0; i < newLength; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}