#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i, a, b) for (ll i = a; i < b; i++)

using namespace std;

void ans()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int o = 0, e = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if (e == 0 && o > 0)
    {
        cout << -1 << "\n";
        return;
    }
    if (o == 0 && e > 0)
    {
        cout << -1 << "\n";
        return;
    }
    if (o > 0 && e > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cout << arr[i] << " ";
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << arr[i] << " ";
            }
        }
        cout << "\n";
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