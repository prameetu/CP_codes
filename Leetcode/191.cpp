//leetcode -191
//Hamming weights

#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) 
{
    int ans(0);
    while(n)
    {
        ans++;
        n = n & n-1;
    }    
    return ans;
}
