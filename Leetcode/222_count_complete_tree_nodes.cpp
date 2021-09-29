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
    int countNodes(TreeNode *root)
    {
        int ans(0);
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();

            ans++;

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        return ans;
    }

    int countNodes(TreeNode *root){
        if(!root)
            return 0;
        int lh = findLeftHeight(root);
        int rh = findRightHeight(root);

        if(lh == rh)
            return pow(2,lh)-1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    int findLeftHeight(TreeNode *root)
    {
        int ht(0);
        while(root)
        {
            ht++;
            root = root->left;
        }

        return ht;
    }
    int findRightHeight(TreeNode *root)
    {
        int ht(0);
        while(root)
        {
            ht++;
            root = root->right;
        }
        return ht;
    }
    };