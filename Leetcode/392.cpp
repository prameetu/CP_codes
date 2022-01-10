#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0;
        for (auto x : t)
        {
            if (s[i] == x)
                i++;
        }
        if (i == s.size())
            return true;
        else
            return false;
    }
};