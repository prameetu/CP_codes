#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length();
        int i(l-1);
        int ans(0);
        while(i >= 0)
        {
            if(s[i] != ' ')
                ans++;
            else if(ans > 0)
                break;
            i--;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    int ans = s.lengthOfLastWord("anamika");
    cout << ans;
}