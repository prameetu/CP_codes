#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkString(string s) {
        int i(0);
        int n(s.size());
        while(i<n)
        {
            if(s[i] == 'b')
            {
                int j(i);
                while(j<n)
                {
                    if(s[j] == 'a')
                        return false;
                    j++;
                }
                return true;
            }
            i++;
        }


        return true;
    }
};