#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows) 
{
    vector <vector <int> > ans;
    for(int i=1;i<=numRows;i++)
    {
        if(i==1)
            ans.push_back({1});
        else
        {
            vector <int> v(i,0);
            v[0] = 1;
            v[i-1]  = 1;
            for(int j=1;j<i-1;j++)
            {
                v[j] = ans[i-2][j-1] + ans[i-2][j];
            }
            ans.push_back(v);

        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = generate(n);
}