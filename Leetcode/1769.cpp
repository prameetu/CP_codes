//leetcode -1769
//https://www.youtube.com/watch?v=TjedLBZbqmM
#include<bits/stdc++.h>

using namespace std;

vector<int> minOperations(string boxes) 
{
    vector <int> ans(boxes.size(),0);

    for(int i=0;i<boxes.size();i++)
    {
        int res(0);
        for(int j=0;j<boxes.size();j++)
        {
            if(boxes[j] == '1')
                res += abs(j-i);
            
        }
        ans[i] = res;
    }

    return ans;
}

vector<int> minOperations(string boxes) 
{
    int up(0),down(0);
    int n(boxes.size());
    vector <int> ans(n,0);

    for(int i=0;i<n;i++)
    {
        if(boxes[i]=='1')
        {
            up++;
            ans[0] += i;
        }
    }

    if(boxes[0] == '1')
    {
        up++;
        down--;
    }

    for(int i=1;i<n;i++)
    {
        ans[i] = ans[i-1] - up + down;
        if(boxes[i] == '1')
        {
            up++;
            down--;
        }
    }

    return ans;
}






int main()
{

}