#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // BFS Approach
    bool validPath(int n, vector<vector<int>> &edges, int start, int end)
    {
        unordered_map<int, vector<int>> ump;
        for (auto e : edges)
        {
            ump[e[0]].push_back(e[1]);
            ump[e[1]].push_back(e[0]);
        }
        vector<int> vis(n, 0);
        queue<int> q;
        q.push(start);
        vis[start] = 1;
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            if (curr == end)
                return true;
            for (auto x : ump[curr])
            {
                if (!vis[x])
                {
                    vis[x] = 1;
                    q.push(x);
                }
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>> &edges, int start, int end)
    {
        unordered_map <int,vector <int>> ump;
        for(auto x:edges)
        {
            ump[x[0]].push_back(x[1]);
            ump[x[1]].push_back(x[0]);
        }

        vector <int> vis(n,0);

        
    }
};