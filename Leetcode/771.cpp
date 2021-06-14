//leetcode - 771
//jewels and stones
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        set <char> s;
        for(auto x:jewels)
        {
            s.insert(x);
        }
        int ans(0);
        for(auto x:stones)
        {
            if(s.find(x) != s.end())
                ans++;
        }

        return ans;
    }
};

int main()
{

}