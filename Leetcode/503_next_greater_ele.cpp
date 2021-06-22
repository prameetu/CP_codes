//leetcode - 503
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n(nums.size());
        vector<int> ans(n);

        for(int i=0; i<nums.size();i++){
            int j=i+1;
            bool found = false;
            while(j != i && !found)
            {
                if(nums[j] > nums[i]){
                    found = true;
                    ans[i] = nums[j];
                } 
                j = (j+1)%n;
            }
            if(!found){
                ans[i] = nums[i];
            }
        }

        return ans;
    }
    
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n(nums.size());
        vector<int> ans(n);

        stack <int> st;

        for(int i=2*n-1;i>=0;i--)
        {
            while(!st.empty() && st.top() <= nums[i%n])
            {
                st.pop();
            }
            if(i<n)
            {
                if(!st.empty())
                    ans[i] = st.top();
                else
                    ans[i] = -1;
            }

            st.push(nums[i%n]);
        }
        
        return ans;
    }
};