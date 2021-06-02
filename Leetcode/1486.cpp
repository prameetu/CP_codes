#include<bits/stdc++.h>
using namespace std;

int xorOperation(int n, int start) 
{
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(start + 2*i);
    } 
    int res(0);
    for(auto x:v)
        res^=x;

    return res;
}

int main()
{

}
