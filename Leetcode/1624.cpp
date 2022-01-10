#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector <int> cnt(26,0);

        int ans(-1);

        for(int i=0;i<s.size();i++)
        {
            if(cnt[s[i]-'a'] == -1)
                cnt[s[i]-'a'] = i;
            else
                ans = max(ans,i-cnt[s[i]-'a']-1);
        }

        return ans;

    }
};