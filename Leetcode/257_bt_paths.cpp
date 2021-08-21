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
    void bt_paths(vector <string> &res,TreeNode *root,string t)
    {
        if(!root)
            return;
        if(root->left == nullptr && root->right == nullptr){
            res.push_back(t);
            return;
        }
        if(root->left)
            bt_paths(res,root->left,t + "->" + to_string(root->left->val));
        if(root->right)
            bt_paths(res,root->right,t + "->" + to_string(root->right->val));

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector <string> res;
        if(!root)
            return res;
        bt_paths(res,root,to_string(root->val));
        return res;
        
    }
};