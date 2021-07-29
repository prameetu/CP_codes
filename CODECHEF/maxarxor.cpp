#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n,k;
    cin >> n >> k;
    int m= n-1;
    ll max_shifts = pow(2,m);
    ll res,temp = pow(2,n)-1;
    if(k>max_shifts)
        cout << 2*temp*max_shifts << "\n";
    else
        cout << 2*temp*k << "\n";
        
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