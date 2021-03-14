//longest substring with no duplicates
//sliding window approach!
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int longest_substring_without_duplicates(string s)
{
    if(s.empty())
        return 0;

    int n = s.length();
    int i(0), j(0);

    vector <int> count(123,0);
    count[s[0]]++;

    int ans=1;
    string sub = s.substr(0,1);
    
    while(j != n-1)
    {
        if(count[s[j+1]] == 0)
        {
            j++;
            count[s[j]]++;
            if (j-i+1 >= ans)
            {
                ans = j-i+1;
                sub = s.substr(i,ans);
            }
        }
        else
        {
            count[s[i]]--;
            i++;
        }
    }
    cout << sub << endl;
    cout << "The length of longest substring is :" <<  ans;

}

int main()
{
    string s;
    cin >> s;
    longest_substring_without_duplicates(s);
}

