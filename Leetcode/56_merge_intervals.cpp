#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    {
        int n = intervals.size();
        vector <vector <int>> res{};
        if(!n)
            return res;
        
        sort(intervals.begin(),intervals.end());

        res.push_back(intervals[0]);

        for(int i=1;i<n;i++)
        {
            if(res.back()[1] >= intervals[i][0])
                res.back()[1] = max(res.back()[1],intervals[i][1]);
            else 
                res.push_back(intervals[i]);
        }

        return res;
        

    }
};