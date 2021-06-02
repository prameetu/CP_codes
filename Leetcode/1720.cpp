//leetcode - 1720
//given => encoded[i] = arr[i] ^ arr[i+1]
//         encoded[i] ^ arr[i+1] ^ encoded[i] = arr[i] ^ arr[i+1] ^ arr[i+1] ^ encoded[i]
//         arr[i+1] = arr[i] ^ encoded[i]

#include<bits/stdc++.h>

using namespace std;

vector<int> decode(vector<int>& encoded, int first) 
{
    int n = encoded.size();
    vector <int> ans(n+1);
    ans[0] = first;
    for(int i=0;i<n;i++)
    {
        ans[i+1] = encoded[i] ^ ans[i];
    }      

    return ans;
}
