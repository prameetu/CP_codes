#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    vector <int> v(11);
    v[a1]++;
    v[a2]++;
    v[a3]++;
    v[a4]++;
    int ct(0);
    for(auto x:v)
    {
        if(x>1)
            ct += x;
    }
    if(ct==0 ||ct == 2 ){
        cout << 2 << "\n";
        return;
    }
    
    if(ct==3 ){
        cout << 1 << "\n";
        return;
    }
    if(ct==4){
        cout << 0 << "\n";
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