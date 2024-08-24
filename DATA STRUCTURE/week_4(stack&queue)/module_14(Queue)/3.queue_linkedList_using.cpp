#include <bits\stdc++.h>
using namespace std;

class myQueue
{
    public:
     list<int> f;
    int sz =0;
    void push(int val)
      { 
        f.push_back(val);
      }
    void pop()
    {  
        f.pop_front();
    }
   int front()
   {
    return f.front();
   }
   int size()
   {
     return f.size();
   }
bool empty()
   {
       return f.empty();
   }
};
int main()
{
       myQueue q;
       int n;
      cin>>n;
      for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;
          q.push(x);
        }
        while (!q.empty())
        {
            cout<< q.front()<<endl;
            q.pop();
        }
       if(!q.empty())
         {
            cout<<q.front();
         }
    return 0;
}