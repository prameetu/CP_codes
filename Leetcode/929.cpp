#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        set <string> st;
        int n(emails.size());

        for(int i=0;i<n;i++)
        {
            string s(emails[i]);
            string res = "";
            for(auto x:s)
            {
                if(x == '+' || x== '@')
                    break;
                if(x== '.')
                    continue;
                res += x;
            }
            res += s.substr(s.find('@'));

            st.insert(res);
        }

        return st.size();
    }
};