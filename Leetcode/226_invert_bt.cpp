#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int countnodes(TreeNode *root)
    {
        if (!root)
            return 0;
        int cnt(1);
        cnt += countnodes(root->left);
        cnt += countnodes(root->right);
        return cnt;
    }
    TreeNode *invertTree(TreeNode *root)
    {
        if (!root)
            return nullptr;
        if (countnodes(root) <= 3)
        {
            TreeNode *temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        else
        {
            invertTree(root->left);
            invertTree(root->right);
        }

        return root;
    }
};