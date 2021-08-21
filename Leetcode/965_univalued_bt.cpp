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
    int inorder(TreeNode *root,int val)
    {
        int ans(1);
        if(root)
        {
            inorder(root->left,val);
            if(root->val != val)
                ans = 0;
            inorder(root->right,val);
        }

        return ans;
    }
    
    bool isUnivalTree(TreeNode* root) {
        if(root)
        {
            int val = root->val; 
            int ans = inorder(root,val);
            if(ans)
                return true;
            else
                return false;
        }
    }

    bool isUnivalTree(TreeNode *root,int val=-1)
    {
        if(!root)
            return true;
        if(val < 0)
            val = root->val;
        return root->val == val && isUnivalTree(root->left,val) && isUnivalTree(root->right,val);
    }
};

