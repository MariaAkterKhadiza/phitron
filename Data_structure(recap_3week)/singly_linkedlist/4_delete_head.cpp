#include <bits\stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this-> val = val;
        this->next = NULL;
    }
};

void delete_head(Node * &head)
{
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
}


Void print_list(Node* head)
{
    Node *tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val <<" ";
        tmp = tmp->next;
    }
    cout<< endl;
}

int main()
{
       Node *head = new Node(10);
       head->next = new Node(20);
       head->next->next = new Node(30);
       head->next->next->next = new Node(40);

       print_list(head);
       delete_head(head);
       cout<< endl;
       print_list(head);

    return 0;
}