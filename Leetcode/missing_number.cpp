//leetcode - 268
#include<bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>& nums) 
{
    int n = nums.size();
    int sum = (n*(n+1))/2;
    int nums_sum(0);
    for(auto x:nums)
        nums_sum += x;
        
    return sum - nums_sum;
}

int main()
{

}