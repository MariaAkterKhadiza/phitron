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


   
       print_list(head);



    return 0;
}