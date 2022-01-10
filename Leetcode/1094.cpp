#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector <pair <int,int>> v;

        for(auto x:trips)
        {
            v.push_back({x[1],x[0]});
            v.push_back({x[1],x[0]*(-1)});
        }

        sort(v.begin(),v.end());

        int curr(0);
        for(auto x:v)
        {
            curr += x.second;
            if(curr > capacity)
                return false;
        }

        return true;
    }

    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector <int> v(1001,0);

        for(auto x:trips)
        {
            int start(x[1]),end(x[2]),cap(x[0]);

            v[start] += cap;
            v[end] -= cap;
        }


        int curr(0);
        for(auto x:v)
        {
            curr += x;
            if(curr > capacity)
                return false;
        }

        return true;
    }
};