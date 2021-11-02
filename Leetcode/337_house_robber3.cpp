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
    vector<int> helper(TreeNode *root)
    {
        vector <int> lhelper = helper(root->left);
        vector <int> rhelper = helper(root->left);

        
        
    }
    int rob(TreeNode *root)
    {
        vector<int> ans = helper(root);
    }
};