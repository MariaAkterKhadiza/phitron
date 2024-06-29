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
 void insert(Node* head,int val)
 {
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }
 }
int main()
{
      Node* head = NULL;
      while(1)
      {
        int val;
        cin>>val;

        if(val == -1)
        {
            break;
        }
        insert(head,val);
      }

   
    return 0;
}