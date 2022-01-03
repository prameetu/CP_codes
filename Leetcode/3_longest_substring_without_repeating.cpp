#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.empty())
            return 0;
        
        map <char,int> mp;
        mp[s[0]]++;
        int i(0),j(0);
        int ans(1);

        while(j<s.size())
        {
            if(mp.find(s[j+1]) == mp.end())
            {
                j++;
                mp[s[j]]++;
                ans = max(ans,j-i+1);
            }
            else{
                mp.erase(s[i]);
                i++;
                
            }
            
        }
        return ans;
    }
};