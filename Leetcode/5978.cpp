#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
        int m(startWords.size()),n(targetWords.size());

        set <string> st;
        for(int i=0;i<m;i++){
            string str(startWords[i]);
            sort(str.begin(),str.end());
            startWords[i] = str;
            st.insert(str);
        }

        for(int i=0;i<n;i++){
            string str(targetWords[i]);
            sort(str.begin(),str.end());
            targetWords[i] = str;

        } 
        
        int res(0);
        for(int i=0;i<n;i++){
            string str(targetWords[i]);
            int size(str.size());
            for(int j=0;j<size;j++)
            {
                string temp = "";
                for(int k=0;k<size;k++)
                {
                    if(j==k)
                        continue;
                    temp.push_back(str[k]);
                }
                if(st.find("" + temp) != st.end())
                {
                    res++;
                    break;
                }
            }
        }

        return res;
    }
};