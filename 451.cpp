#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,int>> vp(256,{0,0});
        for(char c:s) 
            vp[c]={vp[c].first+1,c};
        sort(begin(vp),end(vp));
        s="";
        int c;
        for(auto x:vp){
            c=x.first;
            while(c--) s.push_back(x.second);
        }
        reverse(begin(s),end(s));
        return s;
    }

    string frequencySort(string s) {
        vector <pair<int,int>> vp(256,{0,0});
        for (auto x:s)
            vp[x] = {vp[x].first+1,x};
        sort(vp.begin(),vp.end());

        string ans  = "";
        
        for(auto x:vp)
        {
            int cnt = x.first;
            while(cnt)
            {
                ans.push_back(x.second);
                cnt--;
            } 
        }
        reverse(ans.begin(),ans.end());
        return ans;
    } 
};
