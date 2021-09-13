#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    ll n;
    cin >> n;
    vector <ll> v(n+1);
    ll even_ele(0);
    ll odd_ele(0);
    for(ll i=1;i<=n;i++)
    {
        cin >> v[i];
        if(v[i] % 2 == 0)
            even_ele++;
        else
            odd_ele++;
    }
    
    ll even_idx = n/2;
    ll odd_idx = n - even_idx;

    ll max_sum = min(even_idx,odd_ele) + min(odd_idx,even_ele);

    cout << max_sum << "\n";


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ans();
    }
}