//leetcode - 977
//squares of sorted array
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n(nums.size());
        int i(0); // positive pointer
        while(i < n && nums[i] < 0)
        {
            i++;
        }

        int j(i-1); // negative pointer 
        vector <int> ans;
        while(i<n && j>=0)
        {
            if(abs(nums[i]) < abs(nums[j]))
            {
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
            else
            {
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        while(i<n)
        {
            ans.push_back(nums[i]*nums[i]);
            i++;
        }
        while(j>=0)
        {
            ans.push_back(nums[j]*nums[j]);
            j--;
        }


        return ans;        
    }
};