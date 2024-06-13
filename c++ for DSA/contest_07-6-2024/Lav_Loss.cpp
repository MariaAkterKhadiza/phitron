#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,y,z;
    cin >> x >> y >> z;
    double cp = (x * 100) / (100 - y);
    double sp = cp * (1 + z / 100);
    cout << fixed << setprecision(2) << sp << endl;
    return 0;
}