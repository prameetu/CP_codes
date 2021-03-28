#include<bits/stdc++.h>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
    int t,n;
    vector <int > v;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        int x;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            v.push_back(x);
        }

        int sum(0);

        for(int i=0;i<v.size();i++)
        {
            sum += v[i];
        }

        if(sum%2==0)
            cout << 0 << endl;
        else
        {
            int count;
            for(int i=0;i<n;i++)
            {
                if(v[i] == 2)
                {
                    count++;
                    break;
                }
            }

            if(count!=0)
                cout << 1 << endl;
            else
                cout << -1 << endl;

        }



    }
}
