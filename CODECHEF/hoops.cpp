#include <bits/stdc++.h>

using namespace std;

void ans()
{
    float n;
    cin >> n;
    if(n==1)
        cout << 1 << endl;
    else
    {
        cout << ceil(n/2);
    }
}

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        ans();
    }  
}