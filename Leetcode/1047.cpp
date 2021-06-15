//leetcode - 1047
//remove all adjacent duplicates in string
#include<bits/stdc++.h>

using namespace std;


    string removeDuplicates(string s) {
        string ans;
        for(auto x:s)
        {
            if(ans.size() && ans.back() == x)
                ans.pop_back();
            else
                ans.push_back(x);
        }
        return ans;
    }

int main()
{
    string s("abbaca");
    string ans = removeDuplicates(s);
    cout << ans; 
}