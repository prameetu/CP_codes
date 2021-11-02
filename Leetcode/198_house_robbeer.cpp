#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rob(vector <int> &nums,int n)
    {   
        if(n==-2)
            n = nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[n-1];
        else
        {
            return max(rob(nums,n-2) + nums[n-1],rob(nums,n-1));
        }

    }
    int rob(vector<int>& nums) {
        int l = nums.size();
        int dp[l+1];

        for(int i=0;i<=l;i++)
        {
            if(i == 0)
                dp[i] = 0;
            else if(i == 1)
            {
                dp[i] = nums[i-1];
            }
            else{
                dp[i] = max(dp[i-2]+nums[i-1],dp[i-1]);
            }

        }
        return dp[l];

    }
};