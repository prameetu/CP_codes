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
    int sum_impl(TreeNode* root,int curr_num)
    {
        if(root == nullptr)
            return;

        curr_num = curr_num * 2 + root->val; 

        if(root->left == nullptr && root->right == nullptr)
            return curr_num;    
        else
        {
            int left_sum = sum_impl(root->left,curr_num);
            int right_sum = sum_impl(root->right,curr_num);
            return left_sum + right_sum;
        }
    }

    int sumRootToLeaf(TreeNode* root) {
        int curr_num(0);
        return sum_impl(root,0);
    }
};