#include <bits/stdc++.h>
#define long long ll
using namespace std;

void ans()
{
    ll a, b, c, d, k;
	cin>>a>>b>>c>>d>>k;
	ll x = abs(a - c), y = abs(b - d);
	ll total = x + y;
	if (total > k)
    {
		cout<<"NO\n";
		return;
	}
	ll left = k - total;
	if (left % 2 == 0)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
	}
}

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        ans();
    }  
}