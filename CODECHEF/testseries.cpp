#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i, a, b) for (ll i = a; i < b; i++)

using namespace std;

void ans()
{
    vector<int> res(5);
    int ind(0), eng(0);

    rep(i, 0, 5)
    {
        cin >> res[i];
        if(res[i] == 1)
            ind++;
        else if(res[i] == 2)    
            eng++;
    }

    if(ind == eng)
        cout << "DRAW" << "\n";
    else if(ind > eng)
        cout << "INDIA" << "\n";
    else if(eng > ind)
        cout << "ENGLAND" << "\n";
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