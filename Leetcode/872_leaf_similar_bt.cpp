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
    void inorder(TreeNode *root,vector <int> &v)
    {
        if(!root)
            return;
        v.push_back(root->val);
        inorder(root->left,v);
        inorder(root->right,v);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector <int> v1;
        vector <int> v2;

        inorder(root1,v1);
        inorder(root2,v2);

        return v1==v2;
    }
};