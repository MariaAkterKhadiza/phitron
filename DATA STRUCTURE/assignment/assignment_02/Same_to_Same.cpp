
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_in_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
vector<int> same_or_not_same(Node *head)
{
    vector<int>v;
    Node *tmp = head;
    while (tmp != NULL)
    {
        v.push_back(tmp->val);
        tmp = tmp->next;
    }
    return v;
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int val_1,val_2;
    while (true)
    {
        cin >> val_1;
        if (val_1 == -1)
            break;
        insert_in_tail(head_1, tail_1, val_1);
    }
    while (true)
    {
        cin >> val_2;
        if (val_2 == -1)
            break;
        insert_in_tail(head_2, tail_2, val_2);
    }
    if(same_or_not_same(head_1)==same_or_not_same(head_2)){
        cout<< "YES"<<endl;
    }
    else cout <<"NO"<<endl;
    return 0;
}