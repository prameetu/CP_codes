#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int no_of_set_bits(int n)
    {
        int ans(0);
        while (n)
        {
            ans++;
            n = n & n - 1;
        }

        return ans;
    }

    int helper(int x, int y)
    {
        int res = x ^ y;
        int ans = no_of_set_bits(res);
        return ans;
    }
    int totalHammingDistance(vector<int> &nums)
    {
        int n(nums.size());
        int ans(0);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans += helper(nums[i],nums[j]);
            }
        }

        return ans;
    }

    int totalHammingDistance(vector<int>& nums) {
        int n(nums.size());
        int ans(0);

        for(int i=0;i<32;i++)
        {
            int num_set(0);
            for(int j=0;j<n;j++)
            {
                int x = nums[j] & (1 << i);
                if(x)
                    num_set++;
            }

            ans += (num_set*(n-num_set));
        }

        return ans;
    }


};