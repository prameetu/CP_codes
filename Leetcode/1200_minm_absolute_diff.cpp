#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int min_var(INT_MAX);
        vector<vector<int>> ans;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i] < min_var)
            {
                ans.clear();
                min_var = arr[i+1]-arr[i] ;
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(arr[i+1]-arr[i] == min_var)
                ans.push_back({arr[i],arr[i+1]});
        }
        return ans;
    }
};