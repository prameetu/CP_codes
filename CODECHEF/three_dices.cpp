#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int x,y;
    cin >> x >> y;
    float sum(x+y);
    if(sum >= 6)
    {
        cout << 0 << "\n";
        return;
    }
    float ans = (6-sum)/6;

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