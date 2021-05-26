//leetcode - 217
//Given an integer array nums, return true if any value appears at least twice in the array
// and return false if every element is distinct.

#include<bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int>& nums) 
{
    unordered_set <int> s;
    for(int i=0;i<nums.size();i++)
    {
        s.insert(nums[i]);
    }
    if(nums.size()==s.size())
        return false;
    return true;
}

int main()
{

}