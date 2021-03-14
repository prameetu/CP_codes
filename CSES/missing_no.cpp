#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,x;
    cin >> n;
    vector <int> v;
    v.push_back(0);
    for(int i=0;i<n-1;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int k;
    for(int i=1;i<=n;i++)
    {
        if(v[i] == i)
            continue;
        else
            k=i;
            break;
    }

    cout << k;
}