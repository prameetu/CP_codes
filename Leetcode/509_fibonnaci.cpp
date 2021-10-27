#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        return fib(n-1) + fib(n-2);
    }
    int fib(int n)
    {
        int dp[n+1];
        for(int i=0;i<=n;i++)
        {
            if(n<2)
                dp[i] = i;
            else 
                dp[i] = dp[i-1]+dp[i-2];
        
        }
        return dp[n];
    }
};