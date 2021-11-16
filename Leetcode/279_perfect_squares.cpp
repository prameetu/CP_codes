#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector <int> deno(n);
        for(int i=1;i*i<=n;i++)
        {
            deno.push_back(i*i);
        }
        int ct = deno.size();

        int dp[ct+1][n+1];

        for(int i=0;i<ct+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(j==0)
                    dp[i][j] = 0;
                else if(i==0)
                    dp[i][j] = INT_MAX;
                else if(deno[i-1] <= j)
                    dp[i][j] = min(1+dp[i][j-deno[i-1]],dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[ct][n];


    }
};