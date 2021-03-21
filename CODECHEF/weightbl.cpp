#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans;
    int a,b;
    int w1,w2,x1,x2,m;
    int diff(0);
    while(t--)
    {
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        diff = w2 - w1;
        a = m*x1;
        b = m*x2;
        if((a<=diff) && (b>=diff))
	        cout<< 1 <<endl;
	    else
	        cout<< 0 <<endl;
        

        cout << ans << endl;
    }
}