#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int x;
    cin >> x;
    if(x%4==0)
    {
        cout << "North\n";
        return;
    }
    else if(x%4==1)
    {
        cout << "East\n";
        return;
    }
    else if(x%4==2)
    {
        cout << "South\n";
        return;
    }
    else if(x%4==3)
    {
        cout << "West\n";
        return;
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