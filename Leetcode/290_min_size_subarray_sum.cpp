#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans(INT_MAX);
        int i(0),j(0);
        int sum(0);
        int n = nums.size();

        while(j<nums.size())
        {
            sum = sum + nums[j];
            while( sum >= target)
            {
                ans = min(ans,j-i+1);
                sum -= nums[i];
                i++;
            }
            
        }
        return ans;
    }
};