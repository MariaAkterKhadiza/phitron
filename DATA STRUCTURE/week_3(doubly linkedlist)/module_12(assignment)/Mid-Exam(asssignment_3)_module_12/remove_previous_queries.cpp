#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m; cin >> m;
    list<int> myList;
    while (m--)
    {
        int pos, val; cin >> pos >> val;
        if(pos==0){
            myList.push_front(val);
        }
        else if(pos == 1){
            myList.push_back(val);
        }
        else if(pos==2){
            if(val >= myList.size()){

            }
            else{
                myList.erase(next(myList.begin(),val));
            }
        }
        cout << "L -> ";
        for(int val: myList){
            cout <<val <<" "; 
        }
        list<int> yourList = myList;
        reverse(yourList.begin(), yourList.end());
        cout << endl<< "R -> ";
        for(int val: yourList){
            cout << val <<" ";
        };
        cout << endl;
    }



    return 0;
}
