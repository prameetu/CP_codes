//leetcode - 1342
//Number of Steps to Reduce a Number to Zero
#include<bits/stdc++.h>

using namespace std;

int numberOfSteps(int num) 
{
    int ans(0);
    while(num != 0)
    {
        if(num & 1)        //num is even
        {
            num--;
            ans++;
        }
        else
        {
            num = num >> 1;
            ans++;
        }
    }

    return ans;
}

int main()
{
    int a(14);
    cout << numberOfSteps(a);
}