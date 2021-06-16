//building array with satck operations 
//leetcode - 1441
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string> ans;
        

        int num(1);
        for(int i=0;i<target.size();i++){
            while(num != target[i]){
                num++;
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            
            ans.push_back("Push");
            num++;
        }

        return ans;
    }
};