#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n,s;
    cin >> n >> s;
    int max_diff;
    if(s<=n)
        max_diff = s;
    else{
        int curr = s-n;
        max_diff = n-curr;
    }

    cout << max_diff <<"\n";

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