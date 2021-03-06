#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    int N,H,x;
    int t;
    cin >> N >> H >> x;
    for(int i=0;i<N;i++)
    {
        cin >> t;
        v.push_back(t);
    }

    bool c=false;
    
    for(auto i:v)
    {
        if(x+i >= H)
            c=true;
    }

    if(c)
        cout << "YES";
    else
        cout << "NO";


}