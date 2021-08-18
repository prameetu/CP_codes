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
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        if (root == nullptr)
            return 0;
        int sum(0);

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();

            if (temp->val >= low && temp->val <= high)
                sum += temp->val;

            if (temp->left != nullptr && temp->val > low)
                q.push(temp->left);
            if (temp->right != nullptr && temp->val < high)
                q.push(temp->right);
        }

        return sum;
    }

    int rangeSumBST(TreeNode *root, int low, int high){
        if(root == nullptr)
            return 0;
        
        if(root->val > high)
            return rangeSumBST(root->left,low,high);
        else if(root->val < low)
            return rangeSumBST(root->right,low,high);
        return root->val + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
    }
    };