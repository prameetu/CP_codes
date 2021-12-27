#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    

    int atMostNGivenDigitSet(vector<string> &digits, int n)
    {
        string num_str = to_string(n);
        int num_str_size(num_str.size());
        int k(digits.size());

        int ans(0);

        for (int i = 1; i < num_str_size; i++)
            ans += pow(k, i);

        for(int i=0;i<num_str_size;i++)
        {
            bool same = 0;
            for(auto s:digits)
            {
                if(s[0] < num_str[i])
                    ans += pow(k,num_str_size-1-i);
                else if(s[0] == num_str[i])
                    same=true;
            }
            if(!same)
                return ans;
        }
        return ans+1;
    }
};