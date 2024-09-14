#include <bits/stdc++.h>
using namespace std;
 int nodes, edges;
vector < int > mat [1003] ;
bool visit[1003][1003];


void add_edges(int a, int b){
  mat[a].push_back(b);
  visit[a][b]=true;
 
}

bool ans(int a, int b){
  if(a==b) return true;
  if(visit[a][b]==true ) return true;
  else return false;
  
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  

   cin >> nodes >> edges;
   memset(visit, false, sizeof(visit));

   while ( edges-- )
   {
    int a , b;
    cin >> a >> b;
    add_edges( a, b);
   }

   int q;
   cin >> q;
   while (q--)
   {
      int fi, se;
      cin >> fi >> se;
      if(ans(fi, se) ) cout << "YES" <<endl;
       else cout << "NO" <<endl;
   }
    return 0;
}