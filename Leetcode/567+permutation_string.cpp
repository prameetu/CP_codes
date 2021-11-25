#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> count(26);

        for(auto x:s1)
        {
            count[x-'a']++;
        }
        vector <int> temp(count);
        int i(0);
        while(i<s2.size())
        {
            temp = count;
            if(temp[s2[i]-'a'] != 0)
            {
                int curr(i);
                int j(0);
                
                while(j<s1.size() && curr < s2.size())
                {
                    if(temp[s2[curr]-'a'] != 0)
                    {
                        temp[s2[curr]-'a']--;
                        j++;
                        curr++;
                    }
                    else 
                        break;
                }

                if(j==s1.size())
                    return true;

            }
            i++;
        }

        return false;
    }
};