#include<bits/stdc++.h>

using namespace std;

int missing_element(vector <int> v)
{
    int n = v.size();
    int l(0),h(n-1);
    while(l<=h)
    {
        int mid = (l+h)/2;

        if(v[mid] != mid+1 && v[mid-1] == mid)
            return mid+1;


        if(v[mid] == mid+1)
            l = mid+1;
        else
            h = mid -1;
    }

    return -1;
}


int main(){
    int n;
    cin >> n;
    vector <int> v(n-1);
    for(int i=0;i<n-1;i++){
        cin >> v[i];
    }
}