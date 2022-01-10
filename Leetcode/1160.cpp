#include<bits/stdc++.h>
using namespace std;

class Solution{
    bool helper(string chars,string word)
    {
        unordered_map <char,int> mp;

        for(auto x:chars)
            mp[x]++;
        
        for(auto x:word)
        {
            if(mp[x] <=0)
                return false;
            else
                mp[x]--;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        int ans(0);
        for(auto x:words)
        {
            if(helper(chars,x))
                ans += x.length();
        }
        return ans;
    }
};