#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        // as we need to miximixe the value of a[i] + a[j] + i - j
        // we modify the formula as a[i] + i  a[j] - j
        // the we keep a dp approach for maximizing a[i] + i 
        // and along with that keep the track of ans a[j] - j

        int n(values.size());
        int max_i(values[0]+0);
        int ans(-1);
        for(int i=1;i<n;i++)
        {
            ans = max(ans,max_i + values[i]-i);
            max_i = max(max_i,values[i]+i);
        }
        return ans;
        
    }
};