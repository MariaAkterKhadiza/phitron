#include<bits/stdc++.h>

using namespace std;

int main(){
    string S;
    getline(cin,S);

    stringstream SS(S);

    string word;
    int findOut = 0;
    while (SS>>word)
    {
       if(word=="Jessica"){
        findOut = 1;
        break;
       }
    }
    if(findOut){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}