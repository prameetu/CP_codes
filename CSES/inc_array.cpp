#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long n,x,z;
    cin >> n;
    vector <long> v;
    for(long i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    long count(0);
    for(long i=1;i<n;i++)
    {
        if(v[i] < v[i-1])
        {
            z=(v[i-1]-v[i]);
            v[i] = v[i] + z;
            count += z;
        }
    }

    cout << count;
}