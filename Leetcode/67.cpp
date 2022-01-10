#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int n(a.size() - 1), m(b.size() - 1);
        int numA(0), numB(0);
        int i(0);

        while (n >= 0)
        {
            numA += ((a[n] - '0') * pow(2, i));
            n--;
            i++;
        }
        i = 0;
        while (m >= 0)
        {
            numB += ((b[m] - '0') * pow(2, i));
            m--;
            i++;
        }
        int res(numA + numB);
        if (res == 0)
            return "0";
        string ans = "";

        while (res > 0)
        {
            ans += to_string(res % 2);
            res /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string addBinary(string a, string b)
    {
        int n(a.size() - 1), m(b.size() - 1);
        int carry(0);
        int i(n),j(m);
        string ans = "";
        while(i>=0 && j>=0){
            int curr_a = (i>=0)?a[i--]-'0':0;
            int curr_b = (j>=0)?b[j--]-'0':0;

            int curr_sum = curr_a + curr_b + carry;
            ans = to_string(curr_sum%2) + ans;
            carry = curr_sum/2;
        }
        if(carry>0)
            ans = to_string(carry) + ans;

        return ans;
    }
};