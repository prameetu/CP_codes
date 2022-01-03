#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int cnt(0);
            int curr(i);
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]>=curr)
                    cnt++;
            }
            if(cnt == curr)
                return curr;
        }

        return -1;
    }
};