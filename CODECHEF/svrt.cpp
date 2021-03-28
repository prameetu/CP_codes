#include<iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        if(n%k==0)
        {
            cout << n/k << " " << k << endl;
            continue;
        }

        int max = n/k+1;
        int num = n%k;

        cout << max << " " << num << endl;
    }

    