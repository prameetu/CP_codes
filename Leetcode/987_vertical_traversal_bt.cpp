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

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector <vector<int>> ans;
        if(!root)
            return ans;
        
        map <int,map<int,multiset<int>>> traversal;
        queue <pair <TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();

            TreeNode *curr_node = curr.first;
            int ver = curr.second.first;
            int lev = curr.second.second;

            traversal[ver][lev].insert(curr_node->val);

            if(curr_node->left)
                q.push({curr_node->left,{ver-1,lev+1}});
            if(curr_node->right)
                q.push({curr_node->right,{ver+1,lev+1}});
        }

        for(auto x:traversal)
        {
            vector <int> verticals;
            for(auto y:x.second)
            {
                for(auto z:y.second)
                {
                    verticals.push_back(z);
                }
            }
            ans.push_back(verticals);
        }

        return ans;

    }
};