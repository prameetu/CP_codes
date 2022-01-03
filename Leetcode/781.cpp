#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n(answers.size());

        unordered_map <int,int> mp;
        int ans(0);
        for(auto x:answers)
        {   
            if(x==0)
                ans += 1;
            else
            {
                if(mp[x+1] == 0)
                {
                    ans += x+1;
                    
                }
                mp[x+1]++;
                if(mp[x+1] == x+1)
                    mp[x+1] =0;
            }

        }
        return ans;
    }
};