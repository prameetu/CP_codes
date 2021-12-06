#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd(0),even(0);
        for(auto x:position)
        {
            if(x%2==0)
                even++;
            else
                odd++;
        }
        
        if(odd == even)
            return 0;
        else
            return min(odd,even);
    }
};