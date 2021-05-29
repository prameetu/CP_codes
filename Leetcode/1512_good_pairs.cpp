#include<bits/stdc++.h>

using namespace std;

int numIdenticalPairs(vector<int>& nums) 
{
    vector <int> ans(101,0);
    int res(0);
    for(auto x:nums)
    {
        res += ans[x];
        ans[x]++;
    }

    return res;
    
}