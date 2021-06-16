//mean inequality
#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n;
    cin >> n;
    vector <int> a(2*n);
    rep(i,0,2*n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector <int> ans(2*n);
    rep(i,0,n)
    {
        cout << a[i] << " " << a[i+n] << " " ;
    }
    cout << endl;


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