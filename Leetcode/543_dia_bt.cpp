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
    int dia=0;
    int height(TreeNode *root)
    {
        if(!root)
            return 0;
        return max(height(root->left),height(root->right)) + 1;
    }
    //brute force approach
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        int lh = height(root->left);
        int rh = height(root->right);

        dia = max(dia,(lh+rh));

        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return dia;
        
    }

    int helper(TreeNode *root,int &dia)
    {
        if(!root)
            return 0;
        int lh = helper(root->left,dia);
        int rh = helper(root->right,dia);

        dia = max(dia,(lh+rh));

        return max(lh,rh) + 1; 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        int dia(0);
        helper(root,dia);
        return dia;
        
    }

};