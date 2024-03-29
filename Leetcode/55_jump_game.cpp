#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    

    bool canJump(vector<int>& nums) {
        int n(nums.size());
        int l(n-1);

        for(int i=n-1;i>=0;i--)
        {
            if(i+nums[i] >= l)
                l = i;
        }

        return l == 0;
    }
};