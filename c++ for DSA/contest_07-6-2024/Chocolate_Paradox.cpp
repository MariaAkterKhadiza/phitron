// #include <bits\stdc++.h>
// using namespace std;
// int main()
// {
//         int x, y, t;
//     cin >> x >> y >> t;

//     bool possible = false;

//     for (int i = 0; i * x <= t; i++) {
//         if ((t - i * x) % y == 0) {
//             possible = true;
//             break;
//         }
//     }

//     if (possible) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x,y,T;
    cin >> x >> y >> T;
    
    bool arr[10001] = {false};
    arr[0] = true;

    for(int i=0; i<=T; i++)
    {
        if(arr[i])
        {
            if(x+i <= T) arr[x+i] = true;
            if(y+i <= T) arr[y+i] = true;
        }
    }

    if(arr[T]) 
    {
        cout <<"YES" <<endl;
    }
    else
    {
        cout<< "NO" << endl;
    }
    return 0;
}