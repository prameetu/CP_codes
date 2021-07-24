#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int r1,w1,c1,r2,w2,c2;
    cin >> r1 >> w1 >> c1;
    cin >> r2 >> w2 >> c2;
    int ct1(0),ct2(0);
    if(r1>r2)
        ct1++;
    else
        ct2++;

    if(w1>w2)
        ct1++;
    else
        ct2++;

    if(c1>c2)
        ct1++;
    else
        ct2++;
    
    if(ct1 > ct2)
        cout << "A" << "\n";
    else
        cout << "B" << "\n";
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