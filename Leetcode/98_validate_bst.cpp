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
    void inorder(TreeNode *root,vector <int> &res)
    {
        if(root)
        {
            inorder(root->left,res);
            res.push_back(root->val);
            inorder(root->right,res);
        }
    }
    bool isValidBST(TreeNode *root)
    {
        vector <int> ans;
        inorder(root,ans);
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i] > ans[i+1])
                return false;
        }
        return true;
    }

    void inorder(TreeNode *root,vector <int> &res)
    {
        if(root)
        {
            inorder(root->left,res);
            res.push_back(root->val);
            inorder(root->right,res);
        }
    }

    bool isValidBST(TreeNode *root)
    {
        vector <int> ans;
        inorder(root,ans);
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i] > ans[i+1])
                return false;
        }
        return true;
    }


}

;