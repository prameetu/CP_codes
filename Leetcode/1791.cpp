#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans;
        int first = edges[0][0];
        int second = edges[0][1];
        
        if(edges[1][0] == first)
            return first;
        else if(edges[1][0] == second)
            return second;
        else if(edges[1][1] == first)
            return first;
        else
            return second;

    }
};