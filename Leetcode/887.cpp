#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dp[10005][105];
    int helper(int n,int e)
    {
        if(n==0 || n==1) 
            return n;

        if(e==1)        
            return n;
        
        if(dp[n][e] != -1)
            return dp[n][e];
        
        int ans(INT_MAX);

        // for(int i=1;i<=n;i++){
        //     int temp_ans = 1 + max(helper(i-1,e-1),helper(n-i,e));
        //     ans = min(ans,temp_ans);
        // }
        int low(1),high(n);
        while(low<high)
        {
            int mid = (low+high)/2;

            int broke = helper(mid-1,e-1); // egg broke noe search in lower healf
            int survived = helper(n-mid,e); // egg survived now search in upper half

            if(broke > survived)
                high = mid;
            else 
                low = mid + 1;

            int temp_ans = 1 + max(broke,survived);

            ans = min(ans,temp_ans);   

        }
        dp[n][e] = ans;

        return ans;

    }
    int superEggDrop(int k, int n) {
        memset(dp,-1,sizeof(dp));
        return helper(n,k);
        
    }
};