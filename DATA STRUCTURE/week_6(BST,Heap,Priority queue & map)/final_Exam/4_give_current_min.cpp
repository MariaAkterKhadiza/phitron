#include <bits\stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;
       int arr[n];

       priority_queue<int, vector<int>, greater<int>> pq;
       for(int i=0; i<n; i++)
       {
        cin>>arr[i];
        pq.push(arr[i]);
       }

     int q;
     cin>>q;

     while(q--)
     {
        int cmd;
        cin>> cmd;

        if(cmd == 0)
         {
            int v;
            cin>>v;
            pq.push(v);

             if(!pq.empty())
             {
                cout<<pq.top() <<endl;
             }
         }
         else if(cmd == 1)
         {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<pq.top() <<endl;
            }
         }
         else if(cmd == 2)
         {
            if(pq.empty())
            {
                cout<<"Empty" <<endl;
            }
            else
            {
                pq.pop();
                if(pq.empty())
                {
                    cout<<"Empty"<<endl;
                }
                else
                {
                  cout<<pq.top()<<endl;
                }
            }
         }
     }
    return 0;
}