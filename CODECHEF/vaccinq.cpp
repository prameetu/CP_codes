#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    queue <int> q;
    int n,p,x,y;
    cin >> n >> p >> x >> y;
    rep(i,0,n){
        int temp;
        cin >> temp;
        q.push(temp);
    } 
    int ans(0);
    rep(i,0,p){
        int temp = q.front();
        q.pop();

        if(temp==0){
            ans+=x;
        }
        else
            ans+=y;
    }   
    cout << ans << "\n";

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