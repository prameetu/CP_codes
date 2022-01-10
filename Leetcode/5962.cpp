#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        unordered_set<string> s;
        map<string,int> mp;
        int ans(0);
        for (auto x : words)
        {
            if(x[1] == x[0])
                mp[x]++;
            else
            {
                string rev(x);
                reverse(rev.begin(), rev.end());
                if (s.find(rev) == s.end())
                    s.insert(x);
                else
                {
                    s.erase(s.find(rev));
                    ans += 4;
                }
            }
        }
        bool taken = false;
        for(auto i :mp)
        {
            if(mp[i.first]%2==0)
                ans += mp[i.first]*2;
            else
            {
                if(taken == false)
                {
                    ans += 2;
                    taken = true;
                }
                int z = mp[i.first]-1;
                ans += z*2;
            }
        
       return ans;
};