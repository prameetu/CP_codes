//leetcode - 1480 
//running sum 
#include<bits/stdc++.h>

using namespace std;

vector<int> runningSum(vector<int>& nums) 
{
    int a(0);
    vector <int> v(nums.size(),0);
    for(int i=0;i<nums.size();i++)
    {
        a = a + nums[i];
        v[i] = a;
    }

    return v;
    
}