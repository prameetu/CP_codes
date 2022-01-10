#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n(grid.size());
        int m(grid[0].size());


        int dp[n][m];
        dp[0][0] = grid[0][0];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {   
                    if(!i && !j)
                        continue;
                
                
                    int a,b;
                    // int a(dp[i-1][j]); down 
                    // int b(dp[i][j-1]); right
                    if(i-1 < 0) a = INT_MAX;
                    else a = dp[i-1][j] + grid[i][j];

                    if(j-1 < 0) b= INT_MAX;
                    else b = dp[i][j-1] + grid[i][j];

                    dp[i][j] = min(a,b); 
                    cout << dp[i][j] << " ";
                
            }
            cout << endl;
        }
        return dp[n-1][m-1];
    }
};