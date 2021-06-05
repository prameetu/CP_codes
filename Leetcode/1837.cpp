//leetcode - 1837
// Sum of Digits in Base K

#include<bits/stdc++.h>

using namespace std;

int sumBase(int n, int k)
{
    int ans(0);
    while(n)
    {
        ans += n%k;
        n = n/k;
    }
    return ans;
}
