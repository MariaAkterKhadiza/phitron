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
void insert_at_tail(Node *&head,int v){
{
    Node* newNode = new Node(v);
    if(head==NULL)
     head = newNode;
    cout << "\nInserted at head\n\n";
        return;
    }
    
    Node * tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
        tmp->next = newNode;
        cout<<endl<<"insert at tail"<<endl<<endl;
    }
}
void print_Linked_List(Node *head)
{    cout<<endl;
     cout<<"Yout linked list"<<endl;
    Node*tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<< endl <<endl;;
}
void inser_at_ay_postion(Node* head,int pos,int v)
{
    Node* newNode = new Node(v);
    for(int i=1; i<=pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Inserted at position 0 (head)"<<pos<<endl<<endl;
    return;
}

int main()
{
       Node* head = NULL;
       while(true)
       {
        cout<<"option 1: insert at tail"<<endl;
        cout<<"option 2:print linked list"<<endl;
        cout<<"option 3:insert at any position"<<endl;
        cout<<"option 4:termineet"<<endl;
       int op;
       cin>>op;
       if(op == 1)
       {
        cout<<"Please enter value: ";
         int v;
         cin>>v;
         insert_at_tail(head,v);
       }
        //print_Linked_List(head);
        else if(op==2)
        {
            print_Linked_List(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"Enter the position :  "<<endl;
            cin>>pos;
            cout<<"Enter value: ";
            cin>>v;

        }
        else if(op==4)
        {
            break;
        }
       }
    return 0;
}