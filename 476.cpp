#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int ans(0);
        int cnt(0);
        while(num)
        {
            int last_bit(num & 1) ;
            if(!last_bit){
                ans += pow(2,cnt);
            }
            cnt++;
            num = num >> 1;
        }
        return ans;
    }
    int findComplement(int num) {
        int i(1);
        while(i<=num){
            num^=i;
            i*=2;
        }
        return num;
    }
};