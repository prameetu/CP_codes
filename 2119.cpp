#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int cnt_dig(int num)
    {
        int ans(0);
        while(num){
            ans++;
            num=num/10;
        }
        return ans;
    }
    bool isSameAfterReversals(int num) {
        int reversed(0);
        int temp(num);
        while(temp){
            int rem = temp%10;
            reversed = reversed*10 + rem;
            temp /=10;
        }

        return cnt_dig(num) == cnt_dig(reversed);
    }
};