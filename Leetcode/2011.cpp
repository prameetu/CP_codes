#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans(0);
        for(auto x:operations)
            ans = x[1]=='+' ? ans+1:ans-1;

        return ans;
    }
};