#include <bits/stdc++.h>
using namespace std;
int maxdepth = 1;
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

int maxDepth(TreeNode *root)
{
    int maxdepth = 0;
    if (root == NULL)
    {
        return 0;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {

        int n = q.size();
        for (size_t i = 0; i < n; i++)
        {
            TreeNode *currentNode = q.front();
            q.pop();
            if (currentNode->left != NULL)
                q.push(currentNode->left);
            if (currentNode->right != NULL)
                q.push(currentNode->right);
        }
        maxdepth++;
    }
    return maxdepth;
}