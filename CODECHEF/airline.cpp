#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int ans(0);
    //Checing in a and b and carrying c
    if(a+b <= d && c <=e)
        ans=1;
    //Checking in a and c and carrying b
    else if (a+c <= d && b <=e)
        ans=1;
    //Checking in a and c and carrying b
    else if (b+c <= d && a <=e)
        ans=1;
    if(ans==1)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n"; 
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