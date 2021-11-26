#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l(0),h(nums.size()-1);

        while(l <= h)
        {
            int mid = (l + h)/2;
            if(l==h)
                return l;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid]<target)
                l = mid+1;
            else    
                h = mid-1;
        }
        return 0;
    }
};