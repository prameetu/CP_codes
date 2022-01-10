#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n(matrix.size());
        int m(matrix[0].size());

        int dp[n][m];
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if((i == n-1 && j == m-1) || i == n-1 || j==m-1)
                    dp[i][j] = matrix[i][j];
                else {
                    if(matrix[i][j]==0)
                        dp[i][j] = 0;
                    else{
                        int a(dp[i+1][j]),b(dp[i+1][j+1]),c(dp[i][j=1]);
                        dp[i][j] = min(a,min(b,c)) + 1;
                    }
                        
                }
            }
        }
        int ans(0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans += dp[i][j];
            }
        }

        return ans;
    }
};