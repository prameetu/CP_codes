#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    
    void preorder_helper(Node *root,vector<int> &ans)
    {
        if(!root)
            return;
        
        ans.push_back(root->val);
        for (Node *x : root->children)
            preorder_helper(x,ans);
    }
    
    vector<int> preorder(Node *root)
    {
        vector<int> ans;
        if (root == nullptr)
            return ans;
        preorder_helper(root,ans);
        return ans;
    }

    vector<int> preorder(Node *root)
    {
         vector<int> result;
        if (root == nullptr) {
            return result;
        }
        
        stack<Node*> stk;
        stk.push(root);
        while (!stk.empty()) {
            Node* cur = stk.top();
            stk.pop();
            result.push_back(cur -> val);
            for (int i = cur -> children.size() - 1; i >= 0; i--) {
                if (cur -> children[i] != nullptr) {
                    stk.push(cur -> children[i]);
                }
            }
        }
        return result;
    }
};