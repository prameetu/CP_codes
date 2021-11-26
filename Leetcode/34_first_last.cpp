#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int l(0),h(n-1);

        if(h==0)
        {
            if(nums[h] == target)
                return {0,0};
            else
                return {-1,-1};
        }
        int fo(-1);
        int lo(-1);
        while(l<=h)
        {
            int mid = (l+h)/2;
            
            if(target == nums[mid] && target > nums[mid-1])
            {
                fo = mid;
                break; 
            }
            else if(target > nums[mid])
                l = mid+1;
            else 
                h = mid-1;           
        } 

        l = 0;
        h = n-1;

        while(l<=h)
        {
            int mid = (l+h)/2;
            
            if(target == nums[mid] && target < nums[mid+1])
            {
                lo = mid;
                break; 
            }
            else if(target < nums[mid])
                h = mid-1;
            else 
                l = mid+1;           
        } 

        vector <int> ans{fo,lo};

        return ans;
    }
};