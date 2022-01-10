#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector <int> r1_possible{-1,0,1};
    vector <int> r2_possible{-1,0,1};
    int helper(vector <vector <int>> &grid,int m,int n,int r,int c1,int c2)
    {
        if(r==m)
            return 0;
        

        int cherry = 0;

        if(c1==c2)
            cherry += grid[r][c1];
        else
            cherry += grid[r][c1] + grid[r][c2];
        
        int next_step(0);

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                int newCol1 = c1+r1_possible[i];
                int newCol2 = c2+r2_possible[j];

                if(newCol1 >=0 && newCol1 < n && newCol2 >= 0 && newCol2 < n)
                    next_step = max(next_step,helper(grid,m,n,r+1,c1,c2));
            }
        }
        dp[r][c1][c2] = next_step+cherry;
        return next_step + cherry;
        
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int m(grid.size());
        int n(grid[0].size());

        return helper(grid,m,n,0,0,n-1);
    }
};