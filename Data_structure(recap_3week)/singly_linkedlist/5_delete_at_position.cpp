#include <bits\stdc++.h>
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

void delete_at_postion(Node *head,int pos)
{
        Node *tmp = head;
        for(int i=1; i<pos-1; i++)
        {
            tmp = tmp->next;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while(tmp!=NULL)
     {
        cout << tmp->val <<" ";
        tmp = tmp->next;
     }
}
int main()
{
     Node *head = new Node(10);
     head->next = new Node(20);
     head->next->next = new Node(30);
     head->next->next->next = new Node(40);

     print_list(head);
     cout << endl;
     int pos = 3;
     delete_at_postion(head,pos);
     print_list(head);

    return 0;
}