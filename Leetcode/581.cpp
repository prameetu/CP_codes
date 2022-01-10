#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector <int> v(nums);
        sort(v.begin(),v.end());
        int n(nums.size());
        int i(0),j(n-1);
        while(i<n && nums[i] == v[i])
            i++;
        while(j>i && nums[j] == v[j])
            j--;
        return j-i+1;
    }
    int findUnsortedSubarray(vector<int>& nums) {
        
    }
};