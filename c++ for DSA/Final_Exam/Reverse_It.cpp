#include<bits/stdc++.h>

using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char section;
        int id;
};
int main(){
    int N;
    cin>>N;

    Student st[N];

    for(int i=0;i<N;i++){
        cin>>st[i].nm>>st[i].cls>>st[i].section>>st[i].id;
    }

    int i=0;
    int j=N-1;
    while(i<j){
        swap(st[i].section,st[j].section);
        i++;
        j--;
    }

    for(int i=0;i<N;i++){
        cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].section<<" "<<st[i].id<<endl;
    }
    return 0;
}