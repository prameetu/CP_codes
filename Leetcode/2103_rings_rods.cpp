#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countPoints(string rings) 
    {
        unordered_map <char,unordered_set<char>> mp;

        for(int i=0;i<rings.size()-1;i++)
        {
            char col(rings[i]);
            char rod(rings[i+1]);

            mp[rod].insert(col);
        }

        int ans(0);
        for(auto x:mp)
        {
            if(x.second.size()==3)
                ans++;
        }
        return ans;

    }
};