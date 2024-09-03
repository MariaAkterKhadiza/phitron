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
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void printLeft(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left)
    {
        printLeft(root->left);
        cout << root->left->val << " ";
    }
    else if (root->right)
    {
        printLeft(root->right);
        cout << root->right->val << " ";
    }
}

void print_right(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->right)
    {
        cout << root->right->val << " ";
        print_right(root->right);
    }
    else if (root->left)
    {
        cout << root->left->val << " ";
        print_right(root->left);
    }
}

int main()
{
    Node *root = inputTree();

    if (root->left && !root->right)
    {
        printLeft(root);
        cout << root->val << " ";
    }
    else if (root->right && !root->left)
    {
        cout << root->val << " ";
        print_right(root);
    }
    else if (root->left && root->right)
    {
        printLeft(root);
        cout << root->val << " ";
        print_right(root);
    }
    else if (!root->left && !root->right)
    {
        cout << root->val << " ";
    }

    return 0;
}