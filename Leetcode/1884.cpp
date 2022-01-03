#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dp[1005][1005];
    int helper(int n,int e)
    {
        if(n==0 || n==1) 
            return n;

        if(e==1)        
            return n;
        
        if(dp[n][e] != -1)
            return dp[n][e];
        
        int ans(INT_MAX);

        for(int i=1;i<=n;i++){
            int temp_ans = 1 + max(helper(i-1,e-1),helper(n-i,e));
            ans = min(ans,temp_ans);
        }
        dp[n][e] = ans;

        return ans;

    }
    int twoEggDrop(int n){
        memset(dp,-1,sizeof(dp));

        return helper(n,2);
        

    }

    int superEggDrop(int k, int n) {
        
        int dp[n+1][k+1];
        
        for(int i=1;i<=k;i++)       // for eggs
        {
            for(int j=1;j<=n;j++)   // for floors
            {
                if(i==1)
                    dp[i][j] = j;
                else if(j==1)
                    dp[i][j] = 1;
                else 
            }
        }
    }
};