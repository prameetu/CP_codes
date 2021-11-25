#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        set <int> s;

        int i(0),j(0);

        while(j<nums.size())
        {
            if(s.find(nums[j])!=s.end())
                return true;
            if(s.size()==k)
            {
                s.erase(nums[i]);
                i++;
            }
            s.insert(nums[j]);
            j++;
        }
    }
};