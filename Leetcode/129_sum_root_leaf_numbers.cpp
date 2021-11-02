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

class Solution {
public:
    int helper(TreeNode *root,int curr_num)
    {
        if(!root)
            return;
        int curr_num = curr_num*10 + root->val;

        if(!root->left && !root->right)
            return curr_num;
        else
        {
            int left_sum = helper(root->left,curr_num);
            int right_sum = helper(root->right,curr_num);

            return left_sum + right_sum;
        }

    }

    int sumNumbers(TreeNode* root) {
        int curr_num(0);
        return helper(root,curr_num);
    }
};