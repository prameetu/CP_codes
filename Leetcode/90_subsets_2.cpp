//leetcode - 90
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& nums) 
{
    int n(nums.size());
    int num_subsets(1 << n) ;    // 2^n = 1 << n
    vector <vector <int>> power_set;
    for(int i=0;i<num_subsets;i++)
    {
        vector <int> subset;
        for(int j=0;j<n;j++)
        {
            if((i & (1 << j)))
                subset.push_back(nums[j]);
        }
        sort(subset.begin(),subset.end());
        power_set.push_back(subset);
    }

    set <vector <int> > s;
    for(auto x:power_set)
        s.insert(x);
    
    vector <vector<int>> ans(s.begin(),s.end());

    return ans;
    
}

int main()
{

}