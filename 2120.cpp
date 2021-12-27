#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int helper(int x,int y,int n)
    {
        if(x < 0 || y < 0 || x>=n || y>=n)
            return 0;
        return 1;
        
    }
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int size = s.size();

        vector <int> ans(size,0);

        for(int i=0;i<size;i++)
        {
            int x = startPos[0];
            int y = startPos[1];
            for(int j=i;j<size;j++)
            {
                if(s[j] == 'R'){
                    int temp = helper(x,1+y,n);
                    
                    if(temp == 0)
                        break;
                    y+=1;
                    ans[i] += temp;

                }
                if(s[j] == 'L'){
                    int temp = helper(x,y-1,n);
                    
                    if(temp == 0)
                        break;
                    y-=1;
                    ans[i] += temp;
                }
                if(s[j] == 'D'){
                    int temp = helper(x+1,y,n);
                    
                    if(temp == 0)
                        break;
                    x+=1;
                    ans[i] += temp;
                }
                if(s[j] == 'U'){
                    int temp = helper(x-1,y,n);
                    
                    if(temp == 0)
                        break;
                    x-=1;
                    ans[i] += temp;
                }
            }
        }

        return ans;
    }
};