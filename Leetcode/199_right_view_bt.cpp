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
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;

        if (!root)
            return ans;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int s = q.size();

            for (int i = 0; i < s; i++)
            {
                TreeNode *curr = q.front();
                q.pop();

                if (i == s - 1)
                    ans.push_back(curr->val);

                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
        }

        return ans;
    }

    void helper(TreeNode *root,int lev,vector <int> &res)
    {
        if(!root)
            return;
        if(res.size()==lev)
            res.push_back(root->val);
        helper(root->right,lev+1,res);
        helper(root->left,lev+1,res);
    }

    vector <int> rightSideView(TreeNode *root)
    {
        vector <int> res;
        helper(root,0,res);
        return res;
    }
};