//leetcode - 438
#include<bits/stdc++.h>
using namespace std;

int no_of_set_bits(int n)
{
    int ans(0);
    while(n)
    {
        ans++;
        n = n & n-1;
    }

    return ans;
}

vector<int> countBits(int n) 
{
    vector <int> ans;
    for(int i=0;i<n+1;i++)//------------n
    {
        ans.push_back(no_of_set_bits(i));//---------logn
    }        

    return ans;
}

vector<int> countBits(int n) 
{
    vector <int> ans(n+1,0);

    for(int i=0;i<n+1;i++)
    {
        ans[i] = ans[i & i-1] + 1;
    }
    return ans;
}
int main()
{

}