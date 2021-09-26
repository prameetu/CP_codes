//Split a string in Balanced strings
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int bal(0);
        int ans(0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'R')
                bal++;
            else
                bal--;
            
            if(bal==0)
                ans++;

        }
        return ans;
    }
};