#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n(nums.size());

        if(n<3)
            return 0;
        int i(0),j(1);
        int ans(0);

        while(i < n && j<n)
        {
            int diff = nums[j] - nums[i];
            int k(j+1);
            while(k<n  && (nums[k]-nums[j] == diff)){
                k++;j++;
            }
            int size(j-i+1);
            if(size >= 3){
                for(int p=3;p<=size;p++)
                    ans += size-p+1;
            }

            i=j+1;
            j=i+1;

        }

        return ans;
    }
};