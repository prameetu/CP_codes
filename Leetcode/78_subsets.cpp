//leetcode - 78
//subsets

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(vector<int>& nums) 
{
    if(nums.empty())
        return {{}};
    
    vector <vector <int>> res{{}};
    for(auto x:nums)
    {
        int n = res.size();
        for(int i=0;i<n;i++)
        {
            vector <int> r = res[i];
            r.push_back(x);
            res.push_back(r);
        }
    } 
    return res;

}

int main()