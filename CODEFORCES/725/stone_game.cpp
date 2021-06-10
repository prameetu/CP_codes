#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

void ans()
{
    ll n;
    cin >> n;
    ll mn = INT32_MAX , mx = INT_MIN;
    ll x,y;
    vector <ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i] < mn)
        {
            mn = v[i];
            x=i;
        }
        if(v[i] > mx)
        {
            mx = v[i];
            y = i; 
        }
    }
    x++;
    y++;
    ll p,q,r;
    p = max(x,y);
    q = max(n-x,n-y) + 1;
    r = min(x,y) + n-max(x,y) + 1;
    
    cout << min(p,min(q,r)) << endl;

}

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        ans();
    }  
}