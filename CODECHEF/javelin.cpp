#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n,m,x;
    cin >> n >> m >> x;
    vector <pair<int,int>> qualified(n+1);
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        qualified.push_back({temp,i});
    }
    sort(qualified.rbegin(),qualified.rend());
    int cnt(0);
    for(int j=0;j<n;j++){
        if(qualified[j].first >= m)
            cnt++;
    }
    if(cnt>=x){
        vector <int> v(cnt);
        for(int j=0;j<cnt;j++){
            v[j] = qualified[j].second;
        }
        sort(v.begin(),v.end());
        cout << cnt << " ";
        for(int j=0;j<cnt;j++){
            cout << v[j] + 1 << " ";
        }
        cout << endl;
    }
    else{
        vector <int> v(x);
        for(int j=0;j<x;j++){
            v[j] = qualified[j].second;
        }
        sort(v.begin(),v.end());
        cout << x << " ";
        for(int j=0;j<x;j++){
            cout << v[j] + 1 << " ";
        }
        cout << endl;
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