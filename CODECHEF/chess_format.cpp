#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int a,b;
    cin >> a >> b;

    if((a+b) < 3)
        cout << 1 << "\n";
    else if((a+b) >= 3 && (a+b) <= 10)
        cout << 2 << "\n";
    else if((a+b) >= 11 && (a+b) <= 60)
        cout << 3 << "\n";
    else    
        cout << 4 << "\n";
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