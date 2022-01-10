#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        long(i);
        while(i<=n)
        {
            n = n^i;
            i*=2;
        }

        return n;
    }
};