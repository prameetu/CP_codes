#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector <pair <int,vector <int> > > v;
        for(int i=0;i<points.size();i++)
        {
            int dist = sqrt(pow(points[i][0],2) + pow(points[i][0],2));
            v.push_back({dist,points[i]});
        }

        sort(v.begin(),v.end());

        vector<vector<int>> ans;

        for(int i=0;i<k;i++)
            ans.push_back(v[i].second);

        return ans;

    }
};