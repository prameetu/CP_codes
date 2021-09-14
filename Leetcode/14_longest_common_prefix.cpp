#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMinLength(vector <string> &strs)
    {
        int min_length = INT32_MAX;
        for(auto x:strs)
        {
            if(x.length() < min_length)
                min_length = x.length();
        }
        return min_length;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int min_length = findMinLength(strs);

        string ans = "";
        char curr;

        int n = strs.size();
        for(int i=0;i<min_length;i++)
        {
            curr = strs[0][i];
            for(int j=1;j<n;j++)
            {
                if(strs[j][i] != curr)
                    return ans;
            }
            ans.push_back(curr);
        }   
        return ans;
    }
};