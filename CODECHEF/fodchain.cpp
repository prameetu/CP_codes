#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    float e,k;
    cin >> e >> k;
    int level(1);
    while(floor(e/k)>0)
    {
        level++;
        e = floor(e/k);
    }

    cout << level << "\n";
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