#include <bits\stdc++.h>
using namespace std;
int main()
{
      // replace
    //    int n;
    //    cin>>n;
    //    vector<int> v(n);
    //    for(int i=0; i<n; i++)
    //    {
    //         cin>> v[i];
    //    }

    //  int old_val,new_val;
    //  cin>>old_val>>new_val;

    //  //replace(v.begin(), v.end(),old_val,new_val);
    //  replace(v.begin(), v.end(),3,100);
    //  for(int i=0; i<n; i++)
    //  {
    //     cout<<v[i] <<" ";
    //  }


    //find
       int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int old_val, new_val;
    cin >> old_val >> new_val;

    replace(v.begin(), v.end(),old_val, new_val);

    for(int i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int x;
    cin >> x;

    auto it = find(v.begin(), v.end(), x);
    if(it == v.end())
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << it - v.begin();
    }



    // replace (start_pos, end_pos, old_val, new_val)
    // find (start_pos, end_pos, val)
    return 0;
}