#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    ll n;
    cin >> n;
    vector <ll> v(n);
    ll ans(0);
    rep(i,0,n){
        cin >> v[i];
    }
    rep(i,1,n){
        ans = max(ans,(v[i-1]*v[i]));
    }

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