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
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode *temp(root);
        stack <TreeNode *> st1,st2;
        vector <int> ans;
        if(temp)
            st1.push(temp);

        while(!st1.empty())
        {
            temp = st1.top();
            st1.pop();

            st2.push(temp);

            if(temp->left)
                st1.push(temp->left);

            if(temp->right)
                st1.push(temp->right);
        }

        while(!st2.empty())
        {
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
    }
};