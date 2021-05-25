//leetcode -119

#include<bits/stdc++.h>

using namespace std;

vector<int> getRow(int rowIndex) 
{
    vector <vector <int> > ans;
    for(int i=1;i<=rowIndex+1;i++)
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

    return ans[rowIndex];
}


int main()
{

}