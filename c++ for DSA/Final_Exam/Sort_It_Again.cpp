#include<bits/stdc++.h>

using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char section;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks = 0;
};
bool cmp(Student M, Student N){
    if(M.eng_marks > N.eng_marks)
        return true;
    else if(M.eng_marks < N.eng_marks)
        return false;
    else if(M.math_marks > N.math_marks)
        return true;
    else if(M.math_marks < N.math_marks)
        return false;
    else if(M.id < N.id)
        return true;
    else if(M.id > N.id)
        return false;
    else
        return false;
}
int main(){
    int n;
    cin>>n;

    Student st[n];

    for(int i=0;i<n;i++){
        cin>>st[i].nm>>st[i].cls>>st[i].section>>st[i].id>>st[i].math_marks>>st[i].eng_marks;

        st[i].total_marks = st[i].math_marks + st[i].eng_marks;
    }

    sort(st,st+n,cmp);

    for(int i=0;i<n;i++){
        cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].section<<" "<<st[i].id<<" "<<st[i].math_marks<<" "<<st[i].eng_marks<<endl;
    }

    return 0;
}