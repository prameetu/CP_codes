#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n(nums.size());
        vector <int> prefix(n,0);
        vector <int> suffix(n,0);


        prefix[0] = nums[0];
        suffix[n-1] = nums[n-1];

        for(int i=1;i<n;i++)
            prefix[i] = prefix[i-1] + nums[i];

        for(int i=n-2;i>=0;i--)
            suffix[i] = suffix[i+1] + nums[i];
        
        for(int i=0;i<n;i++){
            if(prefix[i]==suffix[i])
                return i;
        }

        return -1;
    }
    int findMiddleIndex(vector<int>& nums) 
    {
        int n=nums.size();
        int lsum=0;
        int rsum=0;
        for(int i=0;i<n;i++)
            rsum+=nums[i];

        for(int i=0;i<n;i++){
            rsum-=nums[i];
            if(lsum==rsum)
                return i;
            lsum+=nums[i];
        }
        
        return -1;
    }
};