#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int x;
    int sunny(0);
    rep(i,0,7)
    {
        cin >> x;
        if(x==1)
            sunny++;
    }
    int rainy(7-sunny);
    if(sunny>rainy)
        cout << "YES" << "\n";
    else    
        cout << "NO" << "\n";
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