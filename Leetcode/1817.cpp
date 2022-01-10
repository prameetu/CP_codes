#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        int n(logs.size());

        unordered_map <int,set <int>> m;
        for(auto x:logs)
            m[x[0]].insert(x[1]);
        
        vector <int> ans(k+1,0);
        for(auto i:m)
            ans[i.second.size()-1]++;
        
        return ans;

    }
};