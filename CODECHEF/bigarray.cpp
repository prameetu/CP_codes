#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i, a, b) for (ll i = a; i < b; i++)

using namespace std;

void ans()
{
    ll n, s;
    cin >> n >> s;
    ll sum = n * (n + 1) / 2;

    ll ans = sum - s;
    if (ans >= 1 && ans <= n)
        cout << ans << endl;
    else
        cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }
}