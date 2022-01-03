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
    void helper(TreeNode * root,int &ans,int curr_height,int &max_height)
    {
        if(!root)
            return;
        if(curr_height > max_height)
            ans = 0;
        max_height = max(max_height,curr_height);
        
        if(!root->left && !root->right && curr_height==max_height)
            ans += root->val;
        helper(root->left,ans,curr_height+1,max_height);
        helper(root->right,ans,curr_height+1,max_height);

    }
    int deepestLeavesSum(TreeNode* root) {
        if(!root)
            return 0;
        int ans(0);
        int max_height(1);
        helper(root,ans,1,max_height);
        return ans;
    }
};
