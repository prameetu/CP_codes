#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()+1];
        dp[0] = 1;
        // for(int i=1;i<nums.size();i++)
        // {   
        //     dp[i] = 1;
        // }
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j] < nums[i])
                {
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }

        return dp[nums.size()-1];

    }
};