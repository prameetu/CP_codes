#include<bits/stdc++.h>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) 
{
    int i(0),j(n);
    vector <int> v;

    while(i < n && j < 2*n)
    {
        v.push_back(nums[i]);
        v.push_back(nums[j]);
        i++;j++;
    }

    return v;
}
int main()
{
    
}