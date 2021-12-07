#include<bits/stdc++.h>

using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    bool isBadVersion(int version)
    {

    }
    int firstBadVersion(int n) {
        int l(1),h(n);
        while(l<h)
        {
            int m = l+(h-l)/2;
            if(isBadVersion(m) )
                h = m;
            else
                l = m+1;

        }
        return h;
    }
};