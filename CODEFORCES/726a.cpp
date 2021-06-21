//726 
//arthimetic array
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
    int sum(0);
    rep(i,0,n)
    {
       cin >> v[i];
       sum += v[i];  
    }     
    if(sum < n)
        cout << 1 << endl;
    else if(sum == n)
        cout << 0 << endl;
    else
        cout << sum - n << endl;
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