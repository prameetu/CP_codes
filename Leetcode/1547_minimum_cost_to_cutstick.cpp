#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dp[103][103];
    int solve(int i ,int j,vector <int> &cuts)
    {
        if(i>j)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];

        int len(cuts[j]-cuts[i]);
        int ans(INT_MAX);

        for(int k=i+1;k<j;k++)
        {
            int temp = solve(i,k,cuts) + solve(k,j,cuts);

            ans = min(ans,temp);
        }
        dp[i][j] = ans+len;
        return ans+len;
    }
    int minCost(int n, vector<int>& cuts) {
        
        memset(dp,-1,sizeof(dp));
        vector <int> v;
        v.push_back(0);
        for(auto x:cuts)
            v.push_back(x);

        v.push_back(n);
        sort(v.begin(),v.end());
        return solve(0,v.size()-1,v);
    }
};