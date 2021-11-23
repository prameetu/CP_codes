#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)
            return 0;
        int ans(0);
        int i(0),j(0);
        int product(1);
        while(j<nums.size())
        {
            product = product * nums[j];
            while(i<=j && product >= k)
            {
                product /= nums[i];
                i++;
            }
            ans += (j-i+1);

            
        }
        return ans;
    }
};