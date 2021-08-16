#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i, a, b) for (ll i = a; i < b; i++)

using namespace std;

void ans()
{
    int n, ans(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            if(j%i==0){
                for(int k=i;k<=n;k+=j)
                {
                    if(k%j == i)
                        ans++;
                }
            }
        }
    }

    cout << ans << endl;
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