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
    void helper(TreeNode* root,int val,int depth,int curr)
    {
        if(!root)
            return;
        if(curr == depth)
        {
            TreeNode *l(root->left);
            TreeNode *r(root->right);

            root->left = new TreeNode(val);
            root->right = new TreeNode(val);

            root->left->left = l;
            root->right->right = r;
            return;

        }
        
        helper(root->left,val,depth,curr+1);
        helper(root->right,val,depth,curr+1);

    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode *ans = new TreeNode(val);
            ans->left = root;
            return ans;
        }

        helper(root,val,depth,2);
    }
};