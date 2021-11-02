#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size(); 
        
        //1st house is roobed
        int dp[n+1];
        
        if(n==1)
            return nums[0];
        
        dp[0] = 0;  
        dp[1] = nums[0];
        
        for (int i = 2; i <= n-1; i++) { 
            
            dp[i] = max (nums[i-1] + dp[i-2], dp[i-1]);
        } 

        //1st is not robbeded
        int dp_not[n+1]; 
        
        dp_not[0] = 0;  
        dp_not[1] = 0;
        
        for (int i = 2; i <= n; i++) { 
            
            dp_not[i] = max (nums[i-1] + dp_not[i-2], dp_not[i-1]);
        } 

        return max(dp[n-1],dp_not[n]);
        
    }
};