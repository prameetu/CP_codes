#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int facing(0);

        pair<int,int> p{0,0};
        auto q=p;
        for(int i=0;i<instructions.size();i++)
        {
            if(instructions[i] == 'G')
            {
                if(facing == 0)
                    p.second = p.second+=1;
                else if(facing ==1)
                    p.first = p.first -=1;
                else if(facing ==2)
                    p.second = p.second-=1;
                else if(facing ==3)
                    p.first = p.first +=1;
            }
            else if(instructions[i] == 'L')
                facing=(++facing)%4;
            else if(instructions[i] == 'R')
                facing=(++facing)%4; 
        }

        if(p == q || facing != 0)
            return true;

    }
};