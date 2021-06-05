//leetcode - 461
//hamming distance - no . of position where set bits are different
#include<bits/stdc++.h>

using namespace std;

int no_of_set_bits(int n)
{
    int ans(0);
    while(n)
    {
        ans++;
        n = n & n-1;
    }

    return ans;
}

int hammingDistance(int x, int y) 
{
    int res = x^y;
    int ans = no_of_set_bits(res);
    return ans;

}