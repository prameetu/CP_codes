#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
    vector <int> goals(11);
    for(int i=1;i<11;i++){
        cin >> goals[i];
    }
    int score_1(0),score_2(0);
    for(int i=1;i<11;i++)
    {
        if(i%2==0)
            score_2 += goals[i];
        else    
            score_1 += goals[i];
    }
    if(score_2==score_1)
        cout << 0 << endl;
    else if(score_2 > score_1)
        cout << 2 << endl;
    else
        cout << 1 << endl;
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