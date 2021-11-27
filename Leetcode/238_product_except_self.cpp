#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n(nums.size());

        vector <int> ans(n,1);
        int tmp(1);

        for(int i=0;i<n;i++)
        {
            ans[i] = ans[i-1] * nums[i-1];
        }
        int suff_prod = 1;
        for(int i=n-1;i>=0;i--)
        {
            ans[i] = ans[i] *suff_prod;
            suff_prod*= nums[i];
        }
        return ans;
    }
};