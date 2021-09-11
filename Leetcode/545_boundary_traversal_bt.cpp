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
    bool isLeaf(TreeNode *p)
    {
        if (!p->left && !p->right)
            return true;
        return false;
    }
    void addLeftBoundary(TreeNode *root, vector<int> &res)
    {
        TreeNode *curr = root->left;
        while (curr)
        {
            if (!isLeaf(curr))
                res.push_back(curr->val);
            if (curr->left)
                curr = curr->left;
            else
                curr = curr->right;
        }
    }

    void addLeafNodes(TreeNode *root, vector<int> &res)
    {
        if(isLeaf(root))
            res.push_back(root->val);
        
        if(root->left)
            addLeafNodes(root->left,res);
        if(root->left)
            addLeafNodes(root->right,res);
    }

    void addRightBoundary(TreeNode *root, vector<int> &res)
    {
        TreeNode * curr = root->right;
        vector <int> v;
        while(curr)
        {
            if(!isLeaf(curr))
                v.push_back(curr->val);
            if(curr->right)
                curr = curr->right;
            else
                curr = curr->left;
        }
        for(int i = v.size()-1;i>=0;i--)
            res.push_back(v[i]);
    }

    vector<int> printBoundary(TreeNode *root)
    {
        //approch is to take left boundary
        //leaf nodes
        //and right boundary;
        vector<int> res;
        if (!root)
            return res;
        if (!isLeaf(root))
            res.push_back(root->val);

        addLeftBoundary(root, res);
        addLeafNodes(root, res);
        addRightBoundary(root, res);

        return res;
    }
};