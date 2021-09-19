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
    int widthOfBinaryTree(TreeNode *root)
    {
        if (!root)
            return 0;

        int max_width(0);
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            int s = q.size();
            int first, last;
            for (int i = 0; i < s; i++)
            {
                auto curr = q.front();
                q.pop();

                int curr_idx = curr.second;
                TreeNode *curr_node = curr.first;
                if (i == 0)
                    first = curr_idx;
                if (i == s - 1)
                    last = curr_idx;

                if (curr_node->left)
                    q.push({curr_node->left, curr_idx * 2 + 1});
                if (curr_node->right)
                    q.push({curr_node->right, curr_idx * 2 + 2});
            }
            max_width = max(max_width, last - first+1);
        }
        return max_width;
    }

    int widthOfBinaryTree(TreeNode *root)
    {
        if (!root)
            return 0;

        int max_width(0);
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            int s = q.size();
            int first, last;
            int min = q.front().second;
            for (int i = 0; i < s; i++)
            {
                auto curr = q.front();
                q.pop();

                int curr_idx = curr.second-min;
                TreeNode *curr_node = curr.first;
                if (i == 0)
                    first = curr_idx;
                if (i == s - 1)
                    last = curr_idx;

                if (curr_node->left)
                    q.push({curr_node->left, curr_idx * 2 + 1});
                if (curr_node->right)
                    q.push({curr_node->right, curr_idx * 2 + 2});
            }
            max_width = max(max_width, last - first+1);
        }
        return max_width;
    }
};