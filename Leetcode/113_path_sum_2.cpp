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
    void helper(TreeNode *temp,int sum,vector <int> &v,vector <vector <int>> &ans)
    {
        if(!temp)
            return;
        v.push_back(temp->val);
        if(!temp->left && !temp->right && sum == temp->val)
            ans.push_back(v);
        helper(temp->left,sum-temp->val,v,ans);
        helper(temp->right,sum-temp->val,v,ans);
        v.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector <vector <int> > ans;
        vector <int> v;
        helper(root,targetSum,v,ans);
        return ans;
    }
};