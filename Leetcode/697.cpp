#include<bits/stdc++.h>

using namespace std;

int findShortestSubArray(vector<int>& nums) {
    int maxFreq = INT32_MIN;
    int ans = 0;
    map <int,vector <int> > mp;
    for(int i=0;i<nums.size();i++)
        mp[nums[i]].push_back(i);
    
    for(auto x:mp)
    {
        int freq = x.second.size();
        int length = x.second.back()-x.second.front() + 1;

        if(freq > maxFreq)
        {
            maxFreq = freq;
            ans = length;
        }
        else if(freq == maxFreq)
            ans = min(ans,length);
    }

    return ans;
}