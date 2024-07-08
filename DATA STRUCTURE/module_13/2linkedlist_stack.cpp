#include <bits\stdc++.h>
using namespace std;
class myStack
{
    public:
      list<int> f;
      void push(int val)
      {
        f.push_back(val);
      }
      void pop()
      {
        f.pop_back();
      }
      int top()
      {
        return f.back();
      }
      int size()
      {
        return f.size();
      }

      bool empty()
      {
        if(f.size()==0) return true
        else return false;
      }
}
int main()
{    myStack st;
       int n;
       cin>>n;
       for(int i=0; i<n; i++)
       {
          int x;
          cin>>x;
          st.push(x);

       }

      while(!st.empty())
      {
        cout<< st.top() <<endl;
        st.pop();
      }
    return 0;
}