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
            {
                res += abs(j-i);
            }
        }
        ans[i] = res;
    }  

    return ans;  
}


vector<int> minOperations(string boxes) 
{
    int n = boxes.size(); 
    vector <int> res(n,0);
    int behind(0),ahead(0);
    for(int i=0;i<n;i++)
    {
        if(boxes[i] == '1')
        {
            ahead++;            //computing the number of balls ahead of the 0th index box
            res[0] += i;
        }
    }

    if(boxes[0] == '1')
    {
        ahead--;
        behind++;
    }

    for(int i=1;i<n;i++)
    {
        res[i] = res[i-1] - ahead + behind;
        if(boxes[i] == '1')
        {
            ahead--;
            behind++;
        }
    }

    return res;

}


int main()
{

}