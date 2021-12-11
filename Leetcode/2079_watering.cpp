#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int i(-1);
        int curr_cap(capacity);
        int steps(0);
        int n(plants.size());

        while(i<=n-2)
        {
            if(curr_cap >= plants[i+1])
            {
                steps++;
                curr_cap -= plants[i+1];
                i++;
            }
            else
            {
                steps += 2*(i+1);
                curr_cap = capacity;
            }

        }
        return steps;
    }
};