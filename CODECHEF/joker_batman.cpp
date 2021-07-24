#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void ans()
{
   int n, m, l;
        cin >> n >> m >> l;
        int*colors=new int[n+1];
        while (m--)
        {
            int len;
            cin >> len;
            while (len--)
            {
                int temp;
                cin >> temp;
                colors[temp]=m;
            }
        }
        int *arr=new int[l];
       // vector<int> list(l);
       int k=l;
       for(int i=0;i<l;i++){
           cin>>arr[i];
       }
       
        int res=1;
        for(int i=0;i<k-1;i++){
           if(colors[arr[i]]!=colors[arr[i+1]]){
               res++;
           }
        }
        cout<<res<<"\n"   ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ans();
    }
}