#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    ll p,a,b,c,x,y;
    
    cin>> p >> a >> b >> c >> x >> y; 
    
    ll res = min((x*a)+b,(y*a)+c);
    ll ans = p/res;
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ans();
    }
}