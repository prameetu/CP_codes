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
    void postorder_helper(Node *root,vector<int> &ans)
    {
        if(!root)
            return;
        
        for (Node *x : root->children)
            postorder_helper(x,ans);
            ans.push_back(root->val);
    }
    
    vector<int> postorder(Node *root)
    {
        vector<int> ans;
        if (root == nullptr)
            return ans;
        postorder_helper(root,ans);
        return ans;
    }

    vector<int> postorder(Node *root)
    {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }
        
        stack<Node*> stk1;
        stack<Node*> stk2;
        stk1.push(root);
        while (!stk1.empty()) 
        {
            Node* cur = stk1.top();
            stk1.pop();
            stk2.push(cur);
            for(int i=0;i<cur->children.size();i++) {
                if (cur -> children[i] != nullptr) {
                    stk1.push(cur -> children[i]);
                }
            }
        }
        while(!stk2.empty())
        {
            Node *temp = stk2.top();
            stk2.pop();
            result.push_back(temp->val);
        }
        return result;
    }
};