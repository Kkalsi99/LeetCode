#include <bits/stdc++.h>
using namespace std;
int maxdepth = 1;
class Node
{

public:
    int val;
    Node *left;
    Node *right;
    Node() {}
    Node(int val)
    {
        this->val = val;
    }
    Node(int val, Node *left, Node *right)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};
int DFS(Node *node, int depth)
{
    maxdepth = max(maxdepth, depth);
    if (node->left != NULL)
        DFS(node->left, depth + 1);
    if (node->right != NULL)
        DFS(node->left, depth + 1);
    return depth;
}
int maxDepth(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    return max(maxdepth, DFS(root, 1));
}