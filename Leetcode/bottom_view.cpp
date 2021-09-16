#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> bottomView(Node *root)
    {
        vector <int> ans;
        if(!root)
            return ans;
        
        map <int,int> mp;
        queue <pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();

            Node* curr_node = it.first;
            int ver = it.second;
            mp[ver] = curr_node->data;

            if(curr_node->left)
                q.push({curr_node->left,ver-1});
            
            if(curr_node->right)
                q.push({curr_node->right,ver+1});
        }

        for(auto num:mp)
            ans.push_back(num.second);

        return ans;

    }

};