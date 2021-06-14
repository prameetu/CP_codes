#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    int n;
    vector <int> v(4);
    int maximum(0),second_max(0);
    rep(i,0,4)
    {
        cin >> v[i];
        if(v[i] > maximum)
        {
            second_max = maximum;
            maximum = v[i];
        }
        else if(v[i] > second_max)
        {
            second_max = v[i];
        }
    }
    v.push_back(max(v[0],v[1]));
    v.push_back(max(v[2],v[3]));
    v.erase(v.begin(),v.begin()+4);

    if(find(v.begin(),v.end(),maximum) != v.end() && find(v.begin(),v.end(),second_max) != v.end())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

int main()
{
    
    int t;
    cin >> t;
    while (t--) {
        ans();
    }
}