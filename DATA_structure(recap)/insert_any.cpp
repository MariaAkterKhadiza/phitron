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


void insert_head(int val,Node* &head)
{
    Node* newNode = new Node(val);

    if(head==NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;

}
void insert_tail(int val,Node* &head)
{
   Node* newNode = new Node(val);

   if(head == NULL)
   {
    head = newNode;
    return;
   }
   else
   {
    
    Node* tmp = head;
     while(tmp->next !=NULL)
       {
         tmp = tmp->next;
       }

    tmp->next = newNode;
   }

}
void insert_any(int pos,int val,Node* &head)
{
    if(pos==0)
    {
        insert_head(val,head);   
    }
    
    Node* newNode = new Node(val);
    Node* tmp = head;

    for(int i=0;i<pos-1;i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
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
    Node* head = NULL;

    while(true)
    {
        int val;
        cin>>val;

        if(val==-1)
        {
            break;
        }

        insert_tail(val,head);
    }

   //  insert_head(100,head);
    insert_any(1,10,head);
    insert_any(2,200,head);
   
     print_list(head);



    return 0;
}