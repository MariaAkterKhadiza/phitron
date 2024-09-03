#include <bits/stdc++.h>
using namespace std;
 //node
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
void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
      {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
      }
      cout<<endl<<endl;
}
int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
       while(tmp != NULL)
         {
            count++;
            tmp = tmp->next;
         }
         return count;

}
void insert(Node* head,int pos,int val)
{
    Node* newNode = new Node(val);
    Node* tmp= head;
    for(int i=1; i<=pos-1; i++)
     {
         tmp = tmp->next;
     }
   //  cout<<tmp->val<<endl;// pos 1 a ace
   newNode->next = tmp->next;
   tmp->next = newNode;
}
int main()
{
        // Node a,b;
        // a.val = 10; 
        // b.val = 20;
        // a.next  = &b;
        Node *head = new Node(10);
        Node *a= new Node(20);
        Node *b = new Node(30);
        Node *c = new Node(40);
        Node *d = new Node(50);
        head->next = a;
        a->next = b;
        b->next = c;
        c->next = d;

        print_linked_list(head);

         //insert(head,2,800);
         int pos,val;
         cin>>pos>>val;
         if(pos>size(head))
         {
            cout<<"invalid Index"<<endl;
         }
         else
         {
            insert(head,pos,val);
         }
        print_linked_list(head);
       cout<<endl;
    return 0;
}