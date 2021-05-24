#include <bits/stdc++.h>

using namespace std;

int ans()
{
    int d,D,a,b,c;
    cin >> D >> d >> a >> b >> c;
    int total_km = d*D;
    if(total_km >=  42)
        return c;
    else if (total_km >= 21 && total_km < 42)
        return b;
    else if (total_km >= 10 && total_km < 21)
        return a;
    else
        return 0;
    

}

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        cout << ans() << endl;
    }  
}