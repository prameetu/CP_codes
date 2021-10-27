#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int helper(int i, vector <int> &cost)
    {
        if(i>=cost.size())
            return 0;
        int op1 = helper(i+1,cost);
        int op2 = helper(i+2,cost);

        return min(op1,op2) + cost[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(helper(0,cost),helper(1,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size(); 
        int dp[n+2];
        dp[n] = 0;
        dp[n+1] = 0;
        for(int i = n-1;i>=0;i--)
        {
            dp[i] = min(dp[i+1],dp[i+2]) + cost[i];
        }

        return min(dp[0],dp[1]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size(); 
        int dp[n+1];
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2;i<=n;i++)
        {
            dp[i] = min(dp[i-1],dp[i-2]) + cost[i]; 
        }

        return min(dp[n-1],dp[n-2]);
    }
};