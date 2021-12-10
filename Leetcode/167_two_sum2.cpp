#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n(numbers.size());

        int i(0),j(n-1);

        while(i<j)
        {
            int curr_sum(numbers[i]+numbers[j]);
            
            if(curr_sum == target)
                return {i,j};
            else if(curr_sum > target)
                j--;
            else
                i--;
        }

        return {0,0};
    }
};