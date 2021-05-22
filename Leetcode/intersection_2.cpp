//leetcode - 350

#include<bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
{
    unordered_map <int,int> m;

    for(int i=0;i<nums1.size();i++)
    {
        m[nums1[i]]++;
    }        
    vector <int> ans;

    for(int i=0;i<nums2.size();i++)
    {   
        auto it = m.find(nums2[i]);
        if( it != m.end() )
        {
            if((*it).second > 0)
            {
                (*it).second--;
                ans.push_back((*it).first);
            }
        }
    }

    return ans;

}

int main()
{
    vector <int> v1,v2;
    int n,m;
    cin >> n >> m;
    int x;

    while(n--)
    {
        cin >> x;
        v1.push_back(x);
    }

    while(m--)
    {
        cin >> x;
        v2.push_back(x);
    }
    
    vector <int> ans = intersect(v1,v2);

    for(auto x:ans)
        cout << x << " ";
}