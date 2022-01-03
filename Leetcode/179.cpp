#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool mycomp(int x,int y)
    {
        string xy(to_string(x)+to_string(y));
        string yx(to_string(y)+to_string(x));

        return xy > yx;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),mycomp);

        string ans = "";

        for(auto x:nums)
            ans += to_string(x);
        
        return ans;

    }
};