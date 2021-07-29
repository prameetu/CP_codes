#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int a,b;
    int ans(0);
    cin >> a >> b;
    if (a<b)
        cout << 1 << "\n";
    else    
    {
        while(a)
        {
            ans = ans+1;
            a = a%b;
        }
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