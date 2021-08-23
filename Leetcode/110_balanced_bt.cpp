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
    int height(TreeNode *root){
        if(!root)
            return 0;
        return max(height(root->left),height(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        if(abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        else
            return false;
    }

    //O(n) solution

    bool isBalanced(TreeNode* root){
        if(dfsheight(root) != -1)
            return true;
        return false;
    }

    int dfsheight(TreeNode *root){
        if(!root)
            return 0;
        
        int left_height = dfsheight(root->left);
        int right_height = dfsheight(root->right);
        
        if(left_height == -1 || right_height == -1)
            return -1;
        if(abs(left_height-right_height) > 1)
            return -1;

        return max(left_height,right_height) + 1;
    }
};