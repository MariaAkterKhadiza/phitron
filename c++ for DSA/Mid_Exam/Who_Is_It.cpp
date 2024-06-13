#include<bits/stdc++.h>

using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int mark;

    Student(int id, string name, char section, int mark) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->mark = mark;
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int id;
        string name;
        char section;
        int mark;
        cin >> id >> name >> section >> mark;
        Student st1(id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student st2(id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student st3(id, name, section, mark);

        Student highest_student = st1;
    
        if (st2.mark > highest_student.mark || (st2.mark == highest_student.mark && st2.id < highest_student.id)) {
            highest_student = st2;
        }
        if (st3.mark > highest_student.mark || (st3.mark == highest_student.mark && st3.id < highest_student.id)) {
            highest_student = st3;
        }

        cout << highest_student.id << " " << highest_student.name << " " << highest_student.section << " " << highest_student.mark << endl;
    }
    return 0;
}