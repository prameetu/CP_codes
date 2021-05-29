#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
{
    vector <bool> ans(candies.size(),false);

    int max = *max_element(candies.begin(),candies.end());

    for(int i=0;i<candies.size();i++)
    {
        int x = candies[i] + extraCandies;
        ans[i] = x>=max;
    }

    return ans;
    
}

int main()
{

}