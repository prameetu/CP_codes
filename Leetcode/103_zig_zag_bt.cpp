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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector <int> > ans;

        if(!root)
            return ans;

        queue <TreeNode *> q;
        q.push(root);
        bool flag = true;

        while(!q.empty())
        {
            int n = q.size();
            vector <int> levels(n);
            for(int i=0;i<n;i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                
                int j;
                if(flag==true)
                    j = i;
                else if(flag==false)
                    j = n-1-i;
                levels[j] = curr->val;

                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            ans.push_back(levels);
            flag = !flag;
        }
        return ans;
    }
};