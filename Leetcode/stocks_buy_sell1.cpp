#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int max_profit(vector <int> &v)
{
    int min_ele(v[0]),max_profit(0);
    int curr_profit(0);
    for(int i=0;i<v.size();i++)
    {
        if(v[i] < min_ele)
            min_ele = v[i];
        int curr_profit  = v[i] - min_ele;
        max_profit = max(max_profit,curr_profit);

    }

    return max_profit;
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