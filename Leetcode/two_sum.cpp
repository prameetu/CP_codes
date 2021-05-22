//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

//You can return the answer in any order.

#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)       //O(n^2)
{
    vector<int> ans;

    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        for (auto j = nums.begin(); j != nums.end(); j++)
        {
            if (*i + *j == target)
            {
                ans.push_back(*i);
                ans.push_back(*j);
                break;
            }
        }
    }
    return ans;
}


vector <int> two_sum(vector <int> &nums , int target)
{
    unordered_map <int,int> m;
    vector <int> v;
    for(int i=0;i<nums.size();i++)
    {
        if(m.find(target-nums[i]) == m.end())
            m.insert({nums[i],i});
        else
        {
            auto it = m.find(target-nums[i]);
            v.push_back((*it).second);
            v.push_back(i);
            
        }
    }

    return v;
}

int main()
{
    int n;
    vector <int> nums{2,6,5,8,11};
    int target = 14;
    vector <int> v = two_sum(nums,target);
    for(auto x:v)
        cout << x << " ";
}