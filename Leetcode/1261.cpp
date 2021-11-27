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


class FindElements {
public:
    unordered_set <int> s;
    void find_tree(TreeNode *root,int x)
    {
            if(!root)
                return;
            root->val = x;
            s.insert(x);
            find_tree(root->left,2*x+1);
            find_tree(root->right,2*x+2);
 
    }

    FindElements(TreeNode* root) {
        find_tree(root,0);
    }
    
    bool find(int target) {
        if(s.find(target)!=s.end())
            return true;
        return false;
    }
};
