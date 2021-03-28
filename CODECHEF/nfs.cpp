#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int u,v,a,s,t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> u >> v >> a >> s;
        int velo_car(0);
        velo_car = sqrt(pow(u,2) + (2*(-a)*s));
        if(velo_car > v)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }

}