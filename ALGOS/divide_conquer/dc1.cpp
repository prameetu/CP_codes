//First Occurence of element in a sorted array
//Last Occurence of item in an sorted array - Approach is considering the fact 
#include<bits/stdc++.h>

using namespace std;

int first_occurence(vector <int> v,int key)
{
    int l(0),h(v.size()-1);
    int res = -1;
    while(l<=h){
        int mid = (l+h)/2;
        if(v[mid] == key){
            res = mid;
            h = mid-1;
        }
        else if(v[mid] > key)
            h  = mid-1;
        else    
            l  = mid+1;
    }

    return res;
}

int last_occurence(vector <int> v,int key)
{
    int l(0),h(v.size()-1);
    int res = -1;
    while(l<=h){
        int mid = (l+h)/2;
        if(v[mid] == key){
            res = mid;
            l = mid+1;
        }
        else if(v[mid] > key)
            h  = mid-1;
        else    
            l  = mid+1;
    }

    return res;
}
int main()
{
    vector <int> v {4,8,12,12,18,20,42};
    int res = last_occurence(v,12);
    cout << "The key is located at " << res+1  << endl;;


}