#include <bits/stdc++.h>
using namespace std;
int sum = 0;
struct TreeNode
{

public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() {}
    TreeNode(int val)
    {
        this->val = val;
    }
    TreeNode(int val, TreeNode *left, TreeNode *right)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};
void Sum(TreeNode *node)
{
    queue<TreeNode *> q;
    q.push(node->left);
    q.push(node->right);
    for (int i = 0; i < 2; i++)
    {
        sum += q.front()->left->val + q.front()->right->val;
        q.pop();
    }
}

int sumEvenGrandparent(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        for (int i = 0; i < q.size(); i++)
        {
            TreeNode *currentNode = q.front();
            q.pop();
            q.push(currentNode->left);
            q.push(currentNode->right);
            if (currentNode->val % 2)
            {
                Sum(currentNode);
            }
        }
    }
}