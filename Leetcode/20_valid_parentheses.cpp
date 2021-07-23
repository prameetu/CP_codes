//leetcode - 20
//valid parentheses
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack <char> st;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
                continue;
            }
            else
            {
                if(s[i] == ')')
                {
                    if(st.empty())
                        return false;
                    if(st.top() == '(')
                        st.pop();
                    else
                        return false;
                }
                if(s[i] == '}')
                {
                    if(st.empty())
                        return false;
                    if(st.top() == '{')
                        st.pop();
                    else
                        return false;
                }
                if(s[i] == ']')
                {
                    if(st.empty())
                        return false;
                    if(st.top() == '[')
                        st.pop();
                    else
                        return false;

                }

            }
        }
        if(st.empty())
            return true;
        return false;

    }
};