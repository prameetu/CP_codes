#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int max_profit(vector <int> &v)
{
    int max_profit(0);
    for(int i=1;i<v.size();i++)
    {
        if(v[i] > v[i-1])
            max_profit += (v[i] - v[i-1]);    
    }

    return max_profit;
}

int max_profit(vector <int> &v)
{
}

int main()
{
    int n,x;
    vector <int> v;
    cin >> n;
    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << max_profit(v);


}