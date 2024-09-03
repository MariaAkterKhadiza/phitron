#include <bits\stdc++.h>
using namespace std;
int main()
{
       int T;
       cin>>T;
       cin.ignore();

       while(T--)
       {
         string S;
         getline(cin,S);

         stringstream ss(S);
         string W;

         map<string,int> MP;

         int max_count = 0;
         string max_word;

         while(ss>>W)
         {
            MP[W]++;
            if(MP[W] > max_count || (MP[W]== max_count && max_count && max_word.empty()))
              {
                max_count = MP[W];
                max_word = W;
              }
         }

         cout << max_word <<" " <<max_count << endl;
       }

    return 0;
}