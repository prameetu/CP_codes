#include<bits/stdc++.h>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) 
{
    int max_sum(0);
    int intial_sum(0);
    for(int i=0;i<accounts.size();i++)
    {
        max_sum = max(max_sum,accumulate(accounts[i].begin(),accounts[i].end(),intial_sum));
    }
        
    return max_sum;
}

int main()
{

}