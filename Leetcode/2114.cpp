#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans(0);
        for(auto x:sentences)
        {
            int curr_ans(0);
            for(auto words:x)
            {
                if(words == ' ')
                    curr_ans++;
            }
            ans = max(ans,curr_ans);
        }
        return ans+1;
    }
};