#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int longest_substring_with_same_character(string s)
{
    long count(1),ans(1);
    for(long i=1;i<s.length();i++)
    {
        if(s[i] == s[i-1])
            count++;
        else    
            count = 1;
        
        ans = max(ans,count);
    }

    return ans;

}


int main()
{
    string s;
    cin >> s;
    cout << longest_substring_with_same_character(s);
}

