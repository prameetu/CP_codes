#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n(nums.size());

        int ans(nums[0]);

        int maxProd(1),minProd(1);

        for(auto x:nums)
        {
            if(n<0)
                swap(maxProd,minProd);
            
            maxProd = max(maxProd*x,x);
            minProd = min(minProd*n,x);

            ans = max(ans,maxProd);
        }

        return ans;

        
        
    }
};