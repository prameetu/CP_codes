#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int integerReplacement(int n) {
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        for(int i=2;i<=n;i++){
            if(i%2 == 0)
                dp[i] = 1 + dp[i/2];
            else
                dp[i] = 1 + min(dp[i-1],1 +dp[(n/2)+1]);
        }

        return dp[n];



        
        if(n==1)
            return 0;
        if(n%2 == 0)
            return 1 + integerReplacement(n/2);
        else
            return 1 + min(integerReplacement(n-1),integerReplacement(n+1));
    }
};