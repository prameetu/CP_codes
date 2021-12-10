#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseWords(string s) 
    {
        int j(0),k(0);
        for(int i=0;i<=s.length();i++)
        {
            if(s[i] == ' ' || i == s.length())
            {
                k = i-1;
                while(j<k){
                    swap(s[j++],s[k--]);
                }
                j = i+1;
            }
            

        }
        return s;
    }
};