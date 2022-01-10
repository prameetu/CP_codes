#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n(matrix.size());
        int m(matrix[0].size());
        int dp[n][m];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0)
                    dp[i][j] = matrix[i][j];
                else{
                    // int a(dp[i-1][j-1]);
                    //int b(dp[i][j-1]);
                    // int c(dp[i+1][j+1]);
                    int a,b,c;
                    if(j-1 < 0) a = INT_MAX;
                    else    a = dp[i-1][j-1] + matrix[i][j];
                    
                    b = dp[i][j-1] + matrix[i][j];
                    if(j+1 >= m)    c = INT_MAX;
                    else    c = dp[i+1][j-1] + matrix[i][j]; 

                    dp[i][j] = min(a,min(b,c));
                }
            }
        }
        int ans=INT_MAX;
        for (int i = 0; i < m; i++)
            ans = min(ans, dp[n - 1][i]);

        return ans;
    }
    
};