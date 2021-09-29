#include<bits/stdc++.h>

using namespace std;

long taskOfPairing(vector<long> freq) {
    long ans(0),temp(0);
    for(long i=0;i<freq.size();i++)
    {
        ans += freq[i]/2;
        
        temp += freq[i]%2;
            
        if(temp==2)
        {
            ans++;
            temp=0;
        }


    }
    return ans;
}