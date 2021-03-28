#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t,x;
    int n,m;
    cin >> t;
    vector <int> v;
    for(int i=0;i<t;i++)
    {
        v.clear();
        cin >> n >> m ;
        vector <int> count(m+1,0);
        for(int j=0;j<n;j++)
        {
            cin >> x;
            v.push_back(x);
        }

        for(int j=0;j<n;j++)
        {
            count[v[j]]++;
        }

        int z(0);

        for(int j=1;j<=m;j++)
        {
            if(count[j] == 0)
            {
                z++;
            }
        }

        if(z==0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;


    }
}
