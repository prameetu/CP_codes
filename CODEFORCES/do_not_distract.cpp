//codeforces
//div 3 - 719
//A

#include <bits/stdc++.h>

using namespace std;

void ans()
{
    string s;
    int n;
    
    cin >> s;
    cin >> n;
        
    for(char c='A';c<='Z';c++)
    {
        int f = n;
        int l = -1;
        for(int i=0;i<n;i++)
        {
            if(s[i] == c)
            {
                f = min(f,i);
                l = max(l,i);
            }
        }

        for(int j=f;j<=l;j++)
        {
            if(s[j] != c)
            {
                cout << "NO";
                return;
            }
        }
    }
}

int main()
{
    
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        ans();
    }
        
}