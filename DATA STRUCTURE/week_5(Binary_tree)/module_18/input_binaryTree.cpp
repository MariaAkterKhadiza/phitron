#include <bits\stdc++.h>
using namespace std;
class Node
{
    public:
      int val;
      Node* left;
      Node* right;
    Node(int val)
     {  
        this->val = val;
        this->left = NULL;
        this->right = NULL;
     }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {   //1.
        Node* p = q.front();
        q.pop();
        //2.jabotio ja kaj ache
        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1)
          myLeft =NULL;
        else
        myLeft = new Node(l);
        if(r==-1)
            myRight=NULL;
        else 
           myRight=new Node(r);

       p->left = myLeft;
      p->right = myRight;        

      //3 children 
      if(p->left)q.push(p->left);
      if(p->right)q.push(p->right);
        
    }
    return root;
}
void level_order(Node* root)
{
   if(root == NULL)
   {
      cout<<"tree nai"<<endl;
      return;
   }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {  // 1.ber kore ana
        Node* f=q.front();
        q.pop();

        ///2. jabotio ja kaj ace
        cout<<f->val<<" ";

      //children rakha
      if(f->left)q.push(f->left);
      if(f->right)q.push(f->right);

   
        // if(f->right)q.push(f->right);
        // if(f->left)q.push(f->left);
    }

}
int main()
{
       Node* root = input_tree();
       level_order(root);

    return 0;
}

///
input//
// 10 20 60 30 50
// 70 -1 -1 40 -1
// -1 -1 -1 80 -1
// -1 -1
// output
// 10 20 60 30 50 70 40 80 