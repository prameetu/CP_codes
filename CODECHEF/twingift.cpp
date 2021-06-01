#include <bits/stdc++.h>

using namespace std;


void ans_2()
{
    int n,k;
    cin >> n >> k;
    int v[n];
    for(int j=0;j<n;j++)
    {
        cin >> v[j];
    }
    sort(v,v+n,greater <int> ());
    int c1(0),c2(0),t1(0),t2(0);
    int i(0);
    for(i=0;i<n;i++)
    {
        if(i%2 == 0 && c1 != k)
        {
            t1 += v[i];
            c1++;
        }
        if(i%2 != 0)
        {
            t2 += v[i];
            c2++;
        }
        if(c2 == k)
            break;
    }
    if(i != n-1)
        t2 += v[i-1];
        
    cout << max(t1,t2) << endl;
}

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        ans_2();
    }  
}



void ans()
{
    int n,k;
    
    cin >> n >> k;
    vector <int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    
    int t1(0),t2(0);
    for(int i=1;i<2*k+1;i++)
    {
        if(i%2 != 0)    //t1 to turn to select 
        {
            auto it = max_element(v.begin(),v.end());
            t1 += *it;
            v.erase(it);
        }
        else    //t2 to turn to select 
        {
            auto it = max_element(v.begin(),v.end());
            t2 += *it;
            v.erase(it);
        }
    }
    auto it = max_element(v.begin(),v.end());
    t2 += * it;

    cout << max(t1,t2) << endl;
}
