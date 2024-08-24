#include <bits\stdc++.h>
using namespace std;

class Node
{   
    public:
      int val;
      Node* next;
      //contructor
      Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void print_reverse(Node* n)
{   // base case
   if(n == NULL)
   {
    return;
   }
    //cout<<n->val<<" ";
    print_reverse(n->next);
     cout<<n->val<<" ";
}
void print_recursion(Node* n)
{   // base case
   if(n == NULL)
   {
    return;
   }
    cout<<n->val<<" ";
    print_recursion(n->next);
    // cout<<n->val<<" ";
}

int main()
{
       Node *head = new Node(10);
        Node *a= new Node(20);
        Node *b = new Node(30);
        Node *c = new Node(40);
        Node *d = new Node(50);
         head->next = a;
        a->next = b;
        b->next = c;
        c->next = d;
         print_reverse(head);
         cout<<endl;
         print_recursion(head);
    return 0;
}