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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0)
            return nullptr;
        if(nums.size()==1)
            return new TreeNode(nums[0]);
        int n = nums.size();
        int pos = max_element(nums.begin(),nums.end())-nums.begin();
        TreeNode* root = new TreeNode(nums[pos]);
        
        vector <int> left_prefix(nums.begin(),nums.begin()+pos);
        vector <int> right_prefix(nums.begin()+pos+1,nums.end());

        root->left = constructMaximumBinaryTree(left_prefix);
        root->right = constructMaximumBinaryTree(right_prefix);

        return root;
    }


};