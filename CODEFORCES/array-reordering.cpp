//array reordering 
#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n;
    cin>>n;

    vector<int>shuffled,even,odd;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x%2==0) even.push_back(x);
        else odd.push_back(x);
    }
    for(auto i : even)shuffled.push_back(i);
    for(auto i : odd) shuffled.push_back(i);

    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(shuffled[i],2*shuffled[j])>1)
                res++;
        }
    }
    cout<<res<<"\n";
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