//leetcode -1869
#include<bits/stdc++.h>

using namespace std;
bool checkZeroOnes(string s) 
{
    int max_0(0),max_1(0);
    int x(0),y(0);

    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '1')
        {
            y=0;
            x++;
            max_1 = max(x,max_1);
        }
        else
        {
            x=0;
            y++;
            max_0 = max(y,max_0);
        }
    }

    return max_1 > max_0;

}
int main()
{

}