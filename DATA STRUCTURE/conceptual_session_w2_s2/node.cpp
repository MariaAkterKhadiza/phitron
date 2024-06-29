#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node * next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
   // Insert Value
void inserted_at_tail(Node *& head,Node *&tail,int val)   // o(1)
{
    Node * newnode= new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;        //   <- first input
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
   // Print Function
void print(Node * head)
{
    Node * tmp= head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    Node * head=NULL;
    Node * tail=NULL;
     while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        inserted_at_tail(head,tail,val);
    }
    print(head);
    return 0;
}