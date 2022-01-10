#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string originalDigits(string s) {
        vector <int> v(26,0);
        vector <int> res(10,0);
        for(auto x:s)
            v[x-'a']++;
        
        while(v['z'-'a'] >0)
        {
            res[0]++;
            v['z'-'a']--;v['e'-'a']--;v['r'-'a']--;v['o'-'a']--;
        }
        while(v['w'-'a'] >0)
        {
            res[2]++;
            v['t'-'a']--;v['w'-'a']--;v['o'-'a']--;
        }
        while(v['x'-'a'] >0)
        {
            res[6]++;
            v['s'-'a']--;v['i'-'a']--;v['x'-'a']--;
        }
        while(v['g'-'a'] >0)
        {
            res[8]++;
            v['e'-'a']--;v['i'-'a']--;v['g'-'a']--;v['h'-'a']--;v['t'-'a']--;
        }
        while(v['h'-'a'] >0)
        {
            res[3]++;
            v['t'-'a']--;v['h'-'a']--;v['r'-'a']--;v['e'-'a']--;v['e'-'a']--;

        }
        while(v['h'-'a'] >0)
        {
            res[3]++;
            v['t'-'a']--;v['h'-'a']--;v['r'-'a']--;v['e'-'a']--;v['e'-'a']--;

        }
        while(v['r'-'a'] >0)
        {
            res[4]++;
            v['f'-'a']--;v['o'-'a']--;v['u'-'a']--;v['r'-'a']--;
        }
        while(v['o'-'a'] >0)
        {
            res[1]++;
            v['o'-'a']--;v['n'-'a']--;v['e'-'a']--;
        }
        while(v['f'-'a'] >0)
        {
            res[5]++;
            v['f'-'a']--;v['i'-'a']--;v['v'-'a']--;v['e'-'a']--;
        }
        while(v['v'-'a'] >0)
        {
            res[7]++;
            v['s'-'a']--;v['e'-'a']--;v['v'-'a']--;v['e'-'a']--;
            v['e'-'a']--;v['n'-'a']--;
        }
        while (v['e'-'a']>0)
        {
            res[9]++
            v['n'-'a']--;v['i'-'a']--;v['n'-'a']--;v['e'-'a']--;
        }
        

        string ans ="";

        for(int i=0;i<10;i++)
        {
            while(res[i]>0)
            {
                ans += to_string(i);
                res[i]--;
            }
        }

        return ans;
        
    
    }
};