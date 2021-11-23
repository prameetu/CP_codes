#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();

        vector <int> sum(n,0);
        vector <int> dp(n+1,0);

        for(auto num:nums)
        {
            sum[num] += num; 
        }

        dp[0] = 0;
        dp[1] = sum[1];
        
        
        for(int i = 2;i<n+1;i++)
        {
            dp[i] = max(dp[])      
        }    
    }
};