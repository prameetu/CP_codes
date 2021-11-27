#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int helper(int n)
    {
        int sum(0);
        while(n)
        {
            sum = sum + pow(n%10,2);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        
       bool ans;

       while(n!=1)
       {
            n = helper(n);

       }

       return true;
        
    }
};