#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int g1,s1,b1;
    int g2,s2,b2;
    cin >> g1 >> s1 >> b1;
    cin >> g2 >> s2 >> b2;
    if( g1+s1+b1 > g2+s2+b2)
        cout << 1 << "\n";
    else    
        cout << 2 << "\n";
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