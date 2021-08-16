#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int a;
    unordered_map <int,int> m;
    rep(i,0,4){
        cin >> a;
        m[a]++; 
    }
    if(m.size()==4 ||m.size()==3){
        cout << 2 << endl;
    }
    else if(m.size()==1){
        cout << 0 << endl;
    }
    else{
        for(auto x:m){
            if(x.second % 2 == 0)
                cout << 2 << endl;
            else
                cout << 1 << endl;
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
    while (t--) {
        ans();
    }
}