#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        vector <int> temp;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                temp.push_back(mat[i][j]);
            }
        }
        if(r*c != row*col) 
                return mat;
        vector <vector <int>> ans;
        int k=0;
        for(int i=0;i<r;i++)
        {   
            vector <int> tmp;
            for(int j=0;j<c;j++)
            {
                tmp.push_back(temp[k++]);
            }
            ans.push_back(tmp);
        }

        return ans;
    }
};