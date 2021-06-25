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
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode *temp(root);
        vector <int> ans;
        stack <TreeNode *> st;
        while(true)
        {
            if(temp)
            {
                ans.push_back(temp->val);
                st.push(temp);
                temp=temp->left;
            }
            else
            {
                if(st.empty())
                    break;
                temp = st.top();
                st.pop();
                temp = temp->right;
            }
        }
        
        return ans;
    }
};