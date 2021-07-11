#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int xa,ya,xb,yb,xf,yf;
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xf >> yf;

    int dist = abs(xb-xa) + abs(yb-ya);
    
    if (xa != xb && ya != yb)
        cout << dist << "\n";
    else if(dist == (abs(xf-xa) + abs(yf-ya) + abs(xb-xf) + abs(yb-yf)) )
        cout << dist + 2 << "\n";
    else
        cout << dist << "\n";
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