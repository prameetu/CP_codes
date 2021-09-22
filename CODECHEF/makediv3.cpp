#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n;
    cin >> n;
    if(n==1)
        cout << "3";
    else{
        cout << "3";
        rep(i,1,n-1)
            cout << "0";
        cout << "3";
    }
    cout << "\n";

    
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