#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        
        Node *p = q.front();
        q.pop();

      
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft= new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;

        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

int totalNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l =  totalNodes(root->left);
    int r = totalNodes(root->right);
    return l + r + 1;
}


int maxHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = inputTree();
    
    int n = maxHeight(root)  ;
    double power = pow(2,n) - 1;
    int t = totalNodes(root);

    
    if ( t == power)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}