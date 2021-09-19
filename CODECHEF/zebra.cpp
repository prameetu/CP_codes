#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i, a, b) for (ll i = a; i < b; i++)

using namespace std;

void ans()
{
    int n,k;
    string s;
    cin >> n >> k;
    cin >> s;

    char tmp = s[0];
    int cnt(0);
    rep(i,1,n){
        if(tmp != s[i])
        {
            cnt++;
            tmp = s[i]; 
        }
    }

    if(cnt < k){
        cout << -1 << "\n";
        return;
    }
    if(s[0] == '0')
    {
        if(k%2 != 0)
        {
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i] == '1')
                {
                    cout << i+1 << "\n";
                    return;
                }
            }
        }
        else
        {
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i] == '0')
                {
                    cout << i+1 << "\n";
                    return;
                }
            }
        }
    }
    
    else
    {
        if(k%2 != 0)
        {
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i] == '0')
                {
                    cout << i+1 << "\n";
                    return;
                }
            }
        }
        else
        {
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i] == '1')
                {
                    cout << i+1 << "\n";
                    return;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }
}