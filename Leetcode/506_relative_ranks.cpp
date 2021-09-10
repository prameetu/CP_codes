#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    vector<string> findRelativeRanks(vector<int>& score) {
        vector <int> rank;
        for(int i=0;i<score.size();i++)
        {
            rank.push_back(i);
        }
        sort(rank.begin(),rank.end(),[&](int a, int b){return score[a] > score[b];});
    }
};