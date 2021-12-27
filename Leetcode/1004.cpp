#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int j(0),i(0);
        int numZeros(0);
        int n(nums.size());
        int ans(0);
        while(i<n)
        {
            if(nums[i]==0)
                numZeros++;

            while(numZeros > k)
            {
                if(nums[j] == 0)
                    numZeros++;
            }
            ans = max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};