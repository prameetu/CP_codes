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
TreeNode *curr;
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        
        TreeNode *head = new TreeNode(-1);
        TreeNode *p(head);

        stack <TreeNode *> st;

        while(root || st.empty() == false)
        {
            if(root){
                st.push(root);
                root = root->left;
            }
            else{
                root = st.top();
                st.pop();
                p->left = nullptr;
                p->right = new TreeNode(root->val);
                p=p->right;

                root = root->right;
            }
        }

        return head->right;

    }

    TreeNode* increasingBST(TreeNode* root)
    {
        TreeNode* dummy = new TreeNode(-1);
        curr = dummy;

        return dummy->right;

    }

    void inorder(TreeNode* root){
        if(root == nullptr)
            return;
        inorder(root->left);

        root->left = nullptr;
        curr->right = root;
        curr = curr->right;

        inorder(root->right);
    }
};