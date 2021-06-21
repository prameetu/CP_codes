//leetcode - 921
//min add to make valid parentheses string
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char> st;
        vector <char> v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
                v.push_back(s[i]);
                continue;
            }
            else
            {
                if(!st.empty() && st.top() == '('){
                    st.pop();
                    v.pop_back();
                }    
                else
                    v.push_back(s[i]);
            }
        }
        if(v.size()==0)
            return 0;
        return v.size();
    }

    int minAddToMakeValid(string S) {
        int left = 0, right = 0;
        for (char c : S)
            if (c == '(')
                right++;
            else if (right > 0)
                right--;
            else
                left++;
        return left + right;
    }
};