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
bool search(Node* root,int x)
{
  if(root == NULL) return true;
  if(root->val == x) return true;
  if(x < root->val) 
  {
     return search(root->left,x);
     
  }
  else
  {
    return search(root->right,x);
  }
}
int main()
{
       Node* root = input_tree();
       if(search(root,100)) cout<<"yes,Found"<<endl;
       else cout<<"No,Not found"<<endl;

    return 0;
}

// 10 5 15 2 6 12 16 -1
// 3  -1 -1 -1 -1 -1 -1
// -1 -1