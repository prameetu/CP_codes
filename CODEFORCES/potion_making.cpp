
// potion making
#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int k;
    cin >> k;
    int magic(k),water(100-k);
    int gcd =__gcd(magic,water);
    cout << magic/gcd + water/gcd << endl;
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