#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n;
    cin >> n;
    vector <int> v(n);
    int min(101);
    rep(i,0,n)
        cin >> v[i];
    auto min_ele = *min_element(v.begin(),v.end());
    int cnt(0);
    rep(i,0,n)
    {
        if(v[i] == min_ele)
            cnt++;
    }

    cout << n-cnt << endl;


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