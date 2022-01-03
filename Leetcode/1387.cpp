#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int helper(int x, unordered_map<int, int> &mp)
    {
        if (x == 1)
            return 0;
        if (mp.find(x) != mp.end())
            return mp[x];
        if (x % 2 == 0)
            mp[x] = 1 + helper(x / 2, mp);
        else
            mp[x] = 1 + helper((x * 3) + 1, mp);

        return mp[x];
    }

    int getKth(int lo, int hi, int k)
    {
        vector<pair<int, int>> v;
        unordered_map<int, int> mp;

        for (int i = lo; i <= hi; i++)
        {
            v.push_back({helper(i, mp), i});
        }

        sort(v.begin(), v.end());

        return v[k - 1].second;
    }
};