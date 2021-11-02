#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        for(auto x:nums)
        {
            mp[x]++;
        }

        vector <int> ans;

        for(int i=0;i<k;i++)
        {
            int most_freq_ele;
            int cnt(INT_MIN);
            for(auto x:mp)
            {
                if(x.second > cnt)
                {
                    cnt = x.second;
                    most_freq_ele = x.first;
                }
            }
            
            mp[most_freq_ele] = 0;

            ans.push_back(most_freq_ele);
        }

        return ans;
    }

    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map <int,int> mp;

        for(auto x:nums)
        {
            mp[x]++;
        }
        priority_queue <pair <int,int>> pq;

        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        vector <int> res;
        for(int i=0;i<k;i++)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};