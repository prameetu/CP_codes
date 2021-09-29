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
    int maxCnt = 0, cnt = 0, prev = INT_MIN;
    vector<int> res;

    vector<int> findMode(TreeNode *root)
    {
        inorderTraversal(root);
        return res;
    }

    void inorderTraversal(TreeNode *root)
    {
        if (root == NULL) return; 
        inorderTraversal(root->left); 
        if (prev == root->val) cnt++;
        
        else cnt = 1;
        if (cnt > maxCnt)
        {
            res.clear();
            maxCnt = cnt;
            res.push_back(root->val);
        }
        else if (cnt == maxCnt)
        {
            res.push_back(root->val);
        }
        prev = root->val; 
        inorderTraversal(root->right); 
    }
};