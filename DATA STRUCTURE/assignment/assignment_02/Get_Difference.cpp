#include<bits/stdc++.h>

using namespace std;
class Node
{
    public:
      int valu;
      Node *next;
      Node(int valu)
        {
            this->valu = valu;
            this->next = NULL;
        }

};
void insert_in_tail(Node *&head,Node *&tail, int valu)
{
    Node *newNode = new Node(valu);
    if(head == NULL)
      {
        head =newNode;
        tail = newNode;
        return;
      }
      tail->next = newNode;
      tail = newNode;
}
void difference_min_max(Node *head)
{
    Node *tmp = head;
    int min = INT_MAX;
    int max = INT_MIN;
    while(tmp != NULL)
    {
        if(tmp->valu>max)
          {
            max = tmp->valu;
          }
          if(tmp->valu<min)
          {
            min = tmp->valu;
          }
          tmp = tmp->next;
    }
    int difference = max - min;
    cout<<difference<<endl;
}

int main()
{
       Node *head = NULL;
       Node *tail = NULL;
       int valu;
       while(1)
       {
        cin>> valu;
        if(valu == -1)
         {
            break;
         }
         insert_in_tail(head,tail,valu);
       }
   difference_min_max(head);

    return 0;
}