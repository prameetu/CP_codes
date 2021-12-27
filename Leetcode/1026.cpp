#include<bits/stdc++.h>

using namespace std;

#include<bits/stdc++.h>

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

class Solution {
public:
    int helper(TreeNode *root,int max_var,int min_var)
    {
        if(!root)
            return max_var - min_var;

        if(root->val > max_var)
            max_var = root->val;
        if(root->val < min_var)
            min_var = root->val;

        return max(helper(root->left,max_var,min_var),helper(root->right,max_var,min_var));
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root)
            return 0;
        return helper(root,root->val,root->val);
    }
};