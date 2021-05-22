#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        set <int> st;
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end())
                st.insert(nums1[i]);
        }
        vector<int>ans(st.begin(),st.end());
        return ans;
    
    }
};


