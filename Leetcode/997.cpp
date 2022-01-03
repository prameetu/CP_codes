#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int judge(-1);
        map <int,int> mp;
        vector <int> v(n+1,0);
        
        for(auto x:trust)
        {
            v[x[0]]++;
            mp[x[1]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(mp[i] == n-1 && v[i] == 0)
                return i;

        }
        return -1;

    

        
    }
};