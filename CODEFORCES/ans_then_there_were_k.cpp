#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n;
    cin >> n;

    int res(0);

    for(int i=30;i>=0;i--)
    {
        if((1 << i) & n)
        {
            cout <<  (1 << i) - 1 << endl;
            return;
        }
    }
    

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