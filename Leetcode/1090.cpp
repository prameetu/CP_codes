#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        vector <pair <int,int> > v;
        int n(values.size());
        int ans(0);
        for(int i=0;i<n;i++)    
            v.push_back({values[i],labels[i]});
        
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        map <int,int> mp;
        int ct(0),i(0);
        while(i<n && ct<numWanted)
        {
            if(mp[v[i].second] < useLimit)
            {
                ans += v[i].first;
                mp[v[i].second]++;
                ct++;i++;
            }
        }

        return ans;

    }
};
