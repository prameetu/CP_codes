#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> ans;
        for(auto x:nums)
        {
            nums[abs(x)-1] = nums[abs(x)-1] > 0 ? -nums[abs(x)-1] : nums[abs(x)-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                ans.push_back(i+1);
        }
        return ans;
    }
};