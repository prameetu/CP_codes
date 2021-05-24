#include <bits/stdc++.h>

using namespace std;

void ans()
{
    int x,a,b;
    cin >> x >> a >> b;
    int final_sol = a + (100-x)*b;
    cout << final_sol*10 << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        ans();
    }  
}