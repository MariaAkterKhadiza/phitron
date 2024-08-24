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

void remove_twice_element(Node * &head)
{
    Node *tmp_1 = head;
    while (tmp_1 != NULL)
    {
        Node *tmp_2 = tmp_1;
        while (tmp_2->next != NULL)
        {
            if(tmp_2->next->val == tmp_1->val){
                Node *deleteNode = tmp_2->next;
                tmp_2->next = tmp_2->next->next;
                delete deleteNode;
            }
            else{
                tmp_2 = tmp_2->next;
            }
        }
        tmp_1= tmp_1->next;
    }
    
}
void print_in_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_in_tail(head, tail, val);
    }
    remove_twice_element(head);
    print_in_linked_list(head);
    return 0;
}