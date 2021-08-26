#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        priority_queue <int> q;
        for(auto x:nums)
            q.push(x);
        int a = q.top();
        q.pop();
        int b = q.top();
        return (a-1)*(b-1);   
    }
    int maxProduct(vector<int>& nums) 
    {
        int maximum(0),second_max(0);
        for(auto x:nums)
        {
            if(x > maximum)
            {
                second_max = maximum;
                maximum = x;
            }
            else if(x > second_max)
                second_max = x;
            
            return (maximum-1)*(second_max-1);
        }
    }
};