#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string &s, int i, int j)
    {

        while (i < j)
        {

            if (s[i++] != s[j--])
                return false;
        }

        return true;
    }

    int solve(string &s, int i, int j, vector<vector<int>> &dp)
    {

        if (dp[i][j] != -1)
            return dp[i][j];

        if (i >= j)
            return dp[i][j] = 0;

        if (isPalindrome(s, i, j) == true)
            return dp[i][j] = 0;

        int ans = INT_MAX;

        for (int k = i; k < j; k++)
        {

            if (isPalindrome(s, i, k) == false)
                continue;

            int tempAns = solve(s, i, k, dp) + solve(s, k + 1, j, dp) + 1;

            if (tempAns < ans)
                ans = tempAns;
        }

        return dp[i][j] = ans;
    }

    int minCut(string s)
    {
        vector<vector<int>> dp(s.size() + 1, vector<int>(s.size() + 1, -1));
        return solve(s, 0, s.length() - 1, dp);
    }
};