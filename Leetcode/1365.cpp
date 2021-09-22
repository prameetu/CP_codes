// How Many Numbers Are Smaller Than the Current Number
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> counts(101,0);
        for(auto x:nums)
            counts[x]++;
        for(int i=1;i<101;i++)
            counts[i] += counts[i-1];
        
        for(int i=0;i<nums.size();i++)
        {
            nums[i] = counts[nums[i]-1];
        }

        return nums;
    }
};