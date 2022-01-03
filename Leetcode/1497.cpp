#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canArrange(vector<int> &arr, int k)
    {
        vector<int> remainder(k, 0);
        map<int, int> remainder;
        for (auto x : arr)
            remainder[x % k]++;

        int i(1), j(k - 1);

        while (i < j)
        {
            if (remainder[i++] != remainder[j--])
                return false;
        }

        if (remainder[0] % 2 != 0)
            return false;

        if (k % 2 == 0)
        {
            if (remainder[k / 2] % 2 != 0)
                return false;
        }

        return true;
    }

    bool canArrange(vector<int> &arr, int k)
    {
        vector<int> remainder(k, 0);
        for (auto x : arr)
            remainder[(x % k + k) % k]++;

        int i(1), j(k - 1);
        while (i < j)
        {
            if (remainder[i++] != remainder[j--])
                return false;
        }
        if (remainder[0] % 2 != 0)
            return false;

        if (k % 2 == 0)
        {
            if (remainder[k / 2] % 2 != 0)
                return false;
        }

        return true;
    }
};