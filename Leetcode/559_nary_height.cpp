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
    int maxDepth(Node *root){
        if(!root)
            return 0;
        int max_height = 0;
        for(auto x:root->children)
        {
            int curr_height = maxDepth(x) + 1;
            if(curr_height > max_height)
                max_height = curr_height;
        }
        return max_height;
            
    }


    };