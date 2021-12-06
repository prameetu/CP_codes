#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void dfs_helper(vector<vector<int>> &image,int sr,int sc,int newColor)
    {
        if(sr<0 || sc<0 ||sr >= image.size() || sc >= image[0].size() )
            return;
        image[sr][sc] = newColor;
        dfs_helper(image,sr,sc-1,newColor);
        dfs_helper(image,sr,sc+1,newColor);
        dfs_helper(image,sr+1,sc,newColor);
        dfs_helper(image,sr-1,sc,newColor);


    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        if(image[sr][sc] != newColor)
            dfs_helper(image,sr,sc,newColor);
        return image;
    }
};