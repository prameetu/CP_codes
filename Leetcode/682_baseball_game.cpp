//leetcode - 682
//base ball game 
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack <int> st;
        int ans(0);
        for(auto x:ops)
        {
            if(x == "+"){
                int p ,q,r;
                p = st.top();
                st.pop();
                q = st.top();
                r = p + q;
                st.push(p);
                st.push(q);
                st.push(r);
            }
            else if(x == "D"){
                st.push(2 * stoi(x));
            }
            else if(x == "C"){
                st.pop();
            }
            else
            {
                st.push(stoi(x));
            }

        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};