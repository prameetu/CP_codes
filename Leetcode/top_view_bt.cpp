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
    vector<int> topView(Node *root)
    {
       vector <int> ans;
        if(!root)
            return ans;
        
        map <int,map<int,multiset<int>>> traversal;
        queue <pair <Node*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();

            Node *curr_node = curr.first;
            int ver = curr.second.first;
            int lev = curr.second.second;

            traversal[ver][lev].insert(curr_node->data);

            if(curr_node->left)
                q.push({curr_node->left,{ver-1,lev+1}});
            if(curr_node->right)
                q.push({curr_node->right,{ver+1,lev+1}});
        }

        for(auto x:traversal)
        {
            for(auto y:x.second)
            {
                for(auto z:y.second)
                {
                    ans.push_back(z);
                    break;
                }
                break;
            }
        }

        return ans;

    }

};