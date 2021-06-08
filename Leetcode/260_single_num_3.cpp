#include<bits/stdc++.h>

using namespace std;

bool is_bit_set(int n,int k)
{
    int mask = 1 << k;
    int ans = n & mask;

    if(ans)
        return true;
    return false;
}

vector<int> singleNumber(vector<int>& nums) 
{
    int res(0);
    vector <int> ans{0,0};

    for(auto x:nums)
        res ^= x;

    int k(0); 
    while(!is_bit_set(res,k))
        k++;

    for(int i=0;i<nums.size();i++)
    {
        if(is_bit_set(nums[i],k))
            ans[0] ^= nums[i];
        else
             ans[0] ^= nums[i];
    }    

    return ans;
}
int main()
{

}