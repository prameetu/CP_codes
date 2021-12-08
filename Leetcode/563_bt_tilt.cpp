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
    int tiltSum = 0;
    int tilt_sum(TreeNode *root)
    {
        if(!root)
            return 0;
        int left = tilt_sum(root->left);
        int right = tilt_sum(root->right);

        tiltSum += abs(left-right);

        return left+right+root->val;

    }

    int findTilt(TreeNode* root) {
        tilt_sum(root);
        return tiltSum;
    }
};