//leetcode - 219
//contains duplicate - ii
//Given an integer array nums and an integer k, 
//return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

#include<bits/stdc++.h>

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k)
{
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<=k+i && j<nums.size();j++)
        {
            if(nums[i] == nums[j])
                return true;
        }
    }
    return false;
}

bool containsNearbyDuplicate(vector<int>& nums, int k)
{
    unordered_map <int,int> m;
    for(int i=0;i<nums.size();i++)
    {
       int x = nums[i];
       auto it = m.find(x);
       if(it != m.end() && abs(i - (*it).second) <= k)
        return true;
       else
        m[x] = i;
    }
    return false;
}



int main()
{

}