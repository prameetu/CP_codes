#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

void ans()
{
    ll n;
    cin >> n;
    ll cnt(0);
    ll x(0);

    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        cnt += v[i];
    }

    if(cnt%n==0)
    {
        for(int i=0;i<n;i++)
        {
            if(v[i] > cnt/n)
                x++;
        }
        cout << x << endl;
    }
    else
        cout << -1 << endl;
    

}

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        ans();
    }  
}