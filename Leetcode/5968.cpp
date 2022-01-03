#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector <int> v;
        for (auto x:bank)
        {
            if(count(x.begin(),x.end(),1) == 0)
                continue;
            else    
                v.push_back(count(x.begin(),x.end(),1));
        }

        int ans(0);

        if(!v.size())
            return 0;
        
        for(int i=0;i<v.size();i++)
            ans += v[i] + v[i+1];
        
        return ans;
    }
};