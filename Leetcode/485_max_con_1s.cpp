#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans(-1);
        int i(0);
        int n(nums.size());
        while(i<n)
        {
            int tmp(0);
            while(nums[i] == 1 && i<n)
            {
                tmp++;
                i++;
            }
            if(i<n)
            {
                ans = max(ans,tmp);
                break;
            }
            ans = max(ans,tmp);
            while(nums[i] == 0 && i<n)
                i++;
        }
        return ans;
    }
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans(-1);
        int curr_max(0);

        for(auto x:nums)
        {
            if(x>0)
            {
                curr_max++;
                ans = max(ans,curr_max);
            }
            else   
                curr_max=0;
        }
        return ans;
    }
};