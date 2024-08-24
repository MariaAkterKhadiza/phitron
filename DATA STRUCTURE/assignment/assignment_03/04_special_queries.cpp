#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;
    queue<string> q;
    while (T--)
    {
        int ct; cin>>ct;
        if(ct==0){
            string nm; cin >> nm;
            q.push(nm);
        }
        else if(ct==1){
            if(!q.empty()){
                cout << q.front()<<endl;
                q.pop();
            }
            else{
                cout << "Invalid"<<endl;
            }
        }
    }

    return 0;
}