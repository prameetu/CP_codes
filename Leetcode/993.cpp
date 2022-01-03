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
private:
    
public:
    int depth[101];
    int parent[101];
    void helper(TreeNode *root, int curr_depth, int par)
    {
        if(!root)
            return;
        depth[root->val] = curr_depth;
        parent[root->val] = par;

        helper(root->left,curr_depth+1,root->val);
        helper(root->right,curr_depth+1,root->val);
    }
    bool isCousins(TreeNode *root, int x, int y)
    {
        memset(depth,-1,sizeof(depth));
        memset(parent,-1,sizeof(parent));

        helper(root,0,-1);

        if(depth[x] == depth[y] && parent[x] != parent[y])
            return true;
        return false;
    }

    int helper2(TreeNode *root,int &parent,int given,int ht)
    {
        if(!root)
            return 0;
        if(root->val == given)
            return ht;   
        parent = root->val;
        int l(helper2(root->left,parent,given,ht+1));
        if(l)
            return l;
        parent = root->val;

        int r(helper2(root->right,parent,given,ht+1));
        
        return r;
    }

    bool isCousins(TreeNode* root, int x, int y) {
        
        int xPar = -1;
        int yPar = -1;

        int xHeight = helper2(root,xPar,x,0);
        int yHeight = helper2(root,yPar,y,0);
        cout << xPar << "--------" << yPar << endl;
        cout << xHeight << "--------" << yHeight;
        if(xHeight == yHeight && xPar != yPar)
            return true;
        return false;
    }
};