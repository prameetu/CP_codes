#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void helper(int num,int k,int n,int cnt_dig,vector <int> &res)
    {
        if(cnt_dig == n)
            res.push_back(num);
        else{
            int last = num % 10;
            if(k!=0 && last + k <= 9)
                helper(num*10+k+last,k,n,cnt_dig+1,res);
            if((last-k) >=0){
                helper(num*10+(last-k),k,n,cnt_dig+1,res);
            }
        }
    }

    vector<int> numsSameConsecDiff(int n, int k) {
        vector <int> res;
        for(int i=1;i<=9;i++)
        {
            helper(i,k,n,1,res);
        }

        return res;
    }
};