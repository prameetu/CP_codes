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
 
class Solution {
public:
    void helper(TreeNode *root,int &sum )
    {
        if(!root)
            return;
        if(root->val %2 == 0)
        {
            if(root->left && root->left->left)
                sum += root->left->left->val;
            if(root->right && root->right->right)
                sum += root->right->right->val;
            if(root->left && root->left->right)
                sum += root->left->right->val;
            if(root->right && root->right->left)
                sum += root->right->left->val;
        }
        helper(root->left,sum);
        helper(root->right,sum);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int sum(0);
        helper(root,sum);
        return sum;
    }
    
    int sumEvenGrandparent(TreeNode* root,int p=-1,int gp=-1) {
        if(!root)
            return 0;
        int sum(0);
        sum += sumEvenGrandparent(root->left,root->val,p);
        sum += sumEvenGrandparent(root->right,root->val,p);
        if(gp >0 && gp%2==0)
            sum += root->val;
        
        return sum;

    }
};
};