#include <bits/stdc++.h>
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
void insert_int_tail(Node *&head,Node *&tail,int valu)
{
    Node *newNode = new Node(valu);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void search_in_element(Node *head,int v)
{  Node *tmp = head;
   Node *newNode = new Node(v);
    int index = 0;
    while(tmp != NULL)
    {
        if(tmp->valu==v)
           {
            cout<<index<<endl;
            return;
           }
           tmp = tmp->next;
           index++;
    }
    cout<<-1<<endl;
}
int main()
{
       Node *head = NULL;
       Node *tail = NULL;
       int valu;
       int test;
       cin>> test;
       while(test--)
        {
            head =NULL;
            tail =NULL;
            while(true)
            {
                cin>>valu;
                if(valu == -1)
                  {
                    break;
                  }
                  insert_int_tail(head,tail,valu);
            }
            int v;
            cin>>v;
            search_in_element(head,v);

        }

    return 0;
}