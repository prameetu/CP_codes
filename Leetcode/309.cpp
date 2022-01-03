#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n(prices.size());

        vector <int> buy_state(n,0);
        vector <int> sell_state(n,0);
        vector <int> cool_state(n,0);

        buy_state[0] = -prices[0];
        sell_state[0] = 0;
        cool_state[0] = 0;

        for(int i=1;i<n;i++)
        {
            buy_state[i] = max(buy_state[i-1],cool_state[i-1]-prices[i]);
            sell_state[i] = max(sell_state[i-1],buy_state[i-1]+prices[i]);
            cool_state[i] = max(cool_state[i-1],sell_state[i-1]);
        }
        
        return sell_state[n-1];

    }
};