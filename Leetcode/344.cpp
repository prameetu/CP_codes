//leetcode - 344
//reverse string 
#include<bits/stdc++.h>

using namespace std;

void reverseString(vector<char>& s) 
{
    int i(0),j(s.size()-1);
    while(i<=j)
    {
        swap(s[i++],s[j--]);
    }      
}

int main()
{

}