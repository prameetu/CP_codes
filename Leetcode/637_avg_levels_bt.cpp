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
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> ans;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            long curr_sum(0);
            int s = q.size();
            for (int i = 0; i < s; i++)
            {
                TreeNode *curr = q.front();
                q.pop();

                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
                curr_sum += curr->val;
            }
            ans.push_back((double)curr_sum/s);
        }

        return ans;

    }
};