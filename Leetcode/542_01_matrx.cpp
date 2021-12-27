#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dfs_helper(vector <vector <int>> & mat,int i,int j)
    {
        int n(mat.size());
        int m(mat[0].size());

        if(i < 0 || j < 0 || i>=n || j>=m || mat[i][j]==0)
            return 0; 

        return 1 + min(dfs_helper(mat,i+1,j),min(dfs_helper(mat,i-1,j),min(dfs_helper(mat,i,j+1),dfs_helper(mat,i,j-1))));
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n(mat.size());
        int m(mat[0].size());

        vector <vector <int>> ans(n,vector <int>(m,0));  

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j] = dfs_helper(mat,i,j);
            }
        }

        return ans;
    }
};