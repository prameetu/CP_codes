#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int m(grid.size());
        int n(grid[0].size());
        
        int dp[m][n];

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                    dp[i][j] = grid[i][j];
                else
                {
                    if(grid[i][j] == -1)
                        dp[i][j] = 0;
                    else if(grid[i][j] == 1)
                    {
                        int a,b;
                        //a = grid[i][j-1]
                        //b = grid[i-1][j]
                        if(j-1<0)
                            a = INT_MIN;
                        else
                            a = dp[i][j-1];
                        
                        if(i-1 < 0)
                            b = INT_MIN;
                        else
                            b= dp[i-1][j];
                        
                        dp[i][j] = max(a,b) + 1;
                    }
                    else{
                        int a,b;
                        //a = grid[i][j-1]
                        //b = grid[i-1][j]
                        if(j-1<0)
                            a = INT_MIN;
                        else
                            a = dp[i][j-1];
                        
                        if(i-1 < 0)
                            b = INT_MIN;
                        else
                            b= dp[i-1][j];
                        
                        dp[i][j] = max(a,b) ;
                    }
                }
            }
        }
    
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        
        for()
        
        return 0;
    }
};