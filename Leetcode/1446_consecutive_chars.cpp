#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int n(s.length());
        int i(0);
        int ans(-1);
        while(i<n)
        {
            int j(i);
            int cnt(0);
            while(j <n && s[j] == s[i])
            {
                cnt++;
                j++;
                
            }
            ans = max(ans,cnt);
            i=j;
        }

        return ans;
    }
};