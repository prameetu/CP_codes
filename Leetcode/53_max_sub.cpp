#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum(0);
        int max_sum(0);

        for(int i=0;i<nums.size();i++)
        {
            curr_sum += nums[i];

            if(curr_sum <0)
                curr_sum = 0;
            max_sum = max(max_sum,curr_sum);  
        }

        return max_sum;
    }
};