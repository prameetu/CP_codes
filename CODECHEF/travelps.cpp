#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n,a,b;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    int ans(0);
    for(auto x:s)
    {
        if(x == '0')
            ans+=a;
        else
            ans+=b;
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