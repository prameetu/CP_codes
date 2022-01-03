#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long mp(mass);
        sort(asteroids.begin(),asteroids.end());
        for(auto x:asteroids)
        {
            if(mp >= x)
                mp += x;
            else
                return false;
        }
        return true;
    }
};