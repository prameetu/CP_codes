#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int i(0);

        int n(secret.length());
        int bulls(0),cows(0);
        map <char,int> mp;
        while(i<n)
        {
            if(secret[i] == guess[i])
                bulls++;
            else
                mp[secret[i]]++;

        }

        for(int i=0;i<n;i++)
        {
            if(secret[i] != guess[i] && mp[guess[i]]){
                cows++;
                mp[guess[i]]--;
            }
        }

        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }
};