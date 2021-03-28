#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int t;
    cin >> t;
    vector < pair<int,int> > v;
    int n,x;
    int s,r;
    for(int i=0;i<t;i++)
    {
        v.clear();
        cin >> n >> x;
        for(int j=0;j<n;j++)
        {
            cin >> s >> r;
            v.push_back(make_pair(s,r));
        }

        sort(v.begin(), v.end(), sortbysec);
        int ans(0);
        for(int k=v.size()-1;k>=0;k--)
        {
            if(v[k].first <= x)
            {
                ans = v[k].second;
                break;
            }
        }

        cout << ans << endl;


    }
}