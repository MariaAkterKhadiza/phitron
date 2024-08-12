#include <bits\stdc++.h>
using namespace std;
class Node
{
  public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

};

void print_list(Node* head)
{
    while(head != NULL)
     {
        cout<<head->val<<" ";
        head = head->next;
     }
     cout<<endl;
}
int main()
{    
       Node* a = new Node(1);
       Node* b = new Node(2);
       Node* c = new Node(3);

       a->next = b;
       b->next = c;


   
       print_list(a);



    return 0;
}