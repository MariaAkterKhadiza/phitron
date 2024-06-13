// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         int n;
//         scanf("%d", &n);
        
//         int runs[11];
//         for (int i = 0; i < n; ++i) {
//             scanf("%d", &runs[i]);
//         }
        
//         int closestPoint = -1;
//         int min_diff = INT_MAX;;
        
//         for (int i = 0; i < n; ++i) {
//             int diff = abs(100 - runs[i]);
//             if (diff < min_diff) {
//                 min_diff = diff;
//                 closestPoint = runs[i];
//             }
//         }
        
//         printf("%d\n", closestPoint);
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
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
        int closest  = a[0];
        for (int i = 0; i < n; i++)
        {
            if (abs(a[i] - 100) < abs(closest - 100))
            {
                closest = a[i];
            }
            
        }
        cout << closest << endl;
        
        
    }
    
    return 0;
}