#include <bits\stdc++.h>
using namespace std;
class Node
{
    public:
      int val;
      Node* next;
      Node* prev;

    Node(int val)
     {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
     }
};

void insert_in_tail(Node *&head, Node *&tail,int val)
{
        Node *newNode = new Node(val);
        if(head == NULL)
          {
            head = newNode;
            tail = newNode;
            return;
          }
          tail->next = newNode;
          newNode->prev = tail;
          tail = tail->next;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while( tmp!=NULL)
      {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
      }
      cout<<endl;
}

 void is_palindrome_or_not(Node *&head,Node *tail)
 {
     Node *list1 = head;
     Node *list2 = tail;
      
      int maru = 1;
      while(list1 != list2 && list1->next != list2)
         {
            if(list1->val != list2->val)
               {
                 maru = 0;
                 break;
               }
              list1 = list1->next;
              list2 = list2->prev;
         }

         if(list1->val != list2->val)
           {
            maru = 0;
           }
        if(maru == 1)
          {
            cout<< "YES" <<endl;
          }
          else
          {
            cout<< "NO" <<endl;
          }
 }
int main()
{
      Node *head = NULL;
      Node *tail = NULL;

      int val;
      while(true)
        {
            cin>>val;
            if(val == -1)
              {
                break;
              }
              insert_in_tail(head,tail,val);
        }

       is_palindrome_or_not(head,tail);
    return 0;
}