#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int ans(1);
        int i(0);
        int n(sentence.size());
        string curr_sent = "";
        while(i<n)
        {
            if(sentence[i] == ' ')
            {
                curr_sent = "";
                i++;
                ans++;
            }
            else{
                curr_sent += sentence[i];
                if(curr_sent == searchWord)
                    return ans;
            }
        }
    }
};