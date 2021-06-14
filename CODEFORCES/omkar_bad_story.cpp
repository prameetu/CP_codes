#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n,x;
    cin >> n;
    vector <int> v(n);
    bool neg = false;
    rep(i,0,n)
    {
        cin >>  v[i];
        if(v[i] < 0)
            neg = true;
    }
    if(neg)
        cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << 101 << endl;
        rep(i,0,101)
            cout << i << " ";
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