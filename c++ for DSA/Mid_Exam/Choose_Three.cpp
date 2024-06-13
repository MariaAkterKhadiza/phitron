#include<bits/stdc++.h>

    using namespace std;

    int main(){
        int T;
        cin >> T;
        while(T--){
            int arr_size;
            int sum;
            cin>>arr_size>>sum;
            int arr[arr_size];
            for(int i=0;i<arr_size;i++){
                cin>>arr[i];
            }
            int found = 0;
            for(int i=0;i<arr_size;i++){
                for(int j=i+1;j<arr_size;j++){
                  for(int k=j+1;k<arr_size;k++){
                    if(arr[i]+arr[j]+arr[k]==sum){
                        found = 1;
                        break;
                    }
                    if(found)
                    break;
                  }
                  if(found)
                  break;
                }
            }
            if(found){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
        return 0;
    }