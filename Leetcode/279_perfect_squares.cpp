#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector <int> deno(n);

        for(int i=1;i*i <= n ;i++)
            deno.push_back(i*i);
        int s = deno.size();

        int dp[s+1][n+1];

        dp[0][0] = 1e5-1;
        
        for(int i=1;i<s+1;i++)
            dp[i][0] = 0;
        
        for(int j=0;j<n+1;j++)
            dp[0][j] = 1e5-1;

        for(int i=1;i<s+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(deno[i-1] <= j)
                    dp[i][j] = min(1+dp[i][j-deno[i-1]],dp[i-1][j]);
                else    
                    dp[i][j] =dp[i-1][j];
            }
        }

        return dp[s][n];

        
    }
};