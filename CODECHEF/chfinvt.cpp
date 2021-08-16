#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i, a, b) for (ll i = a; i < b; i++)

using namespace std;

void ans()
{
    int n, p, k;
    cin >> n >> p >> k;
    int days(0);

    // for(int i=0;i<k;i++){
    //     for(int j=0;j<n;j++){
    //         if(j%k == i){
    //             days++;
    //             if(j==p){
    //                 cout << days << endl;
    //                 return;
    //             }
    //         }
    //     }
    // }

    int r = p % k;
    r--;

    int tot = (((n - 1) / k) * k);
    tot = n - 1 - tot;
    if (r > tot)
        days += (tot + 1) * ((n - 1) / k + 1) + (r - tot) * ((n - 1) / k);
    else
        days += ((n - 1) / k + 1) * (r + 1);
    for (int i = r + 1; i <= n - 1; i += k)
    {
        days++;
        if (i == p)
        {
            cout << days << endl;
            break;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }
}