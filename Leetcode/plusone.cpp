#include<bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int>& digits) 
{
    int n = digits.size();
    int i;
    for (i=digits.size()-1;i>=0;i--)
    {
        if(digits[i] < 9 )
        {
            digits[i]++;
            return digits;
        }
        else
        {
            digits[i] = 0;
        }
    }
    digits.insert(digits.begin(),1);

    return digits;
}

int main()
{
    int n,x;
    cin >> n;
    vector <int> v;

    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }
}