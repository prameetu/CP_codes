#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numDifferentIntegers(string word) {
        set <string> st;

        int s(word.size());
        int i(0);
        while(i<s)
        {
            if(isdigit(word[i]) == false)
                i++;
            else{
                string t = "";
                while(i<s && isdigit(word[i]))
                {
                    t+= word[i];
                    i++;
                }
                int j(0);
                while(j<t.length() && t[j] == '0'){
                    j++;
                }
                t = t.substr(j);
                st.insert(t);
            }
        }
        return st.size();
    }
};