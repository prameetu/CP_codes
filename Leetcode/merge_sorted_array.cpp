//leetcode - 88

#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    auto it1 = nums1.begin();
    auto it2 = nums2.begin();
    int i(0),j(0);
    while(it1 != nums1.end() && it2 != nums2.end())
    {
        if(*it1 < *it2)
        {
            it1++;
            i++;
        }
        else
        {
            it1 = nums1.insert(nums1.begin()+i,*it2);
            it1++;
            it2++;
            i++;
            j++;

        }
    } 
    for(;it2 != nums2.end();it2++)
    {
        nums1.push_back(*it2);
    }
}
int main()
{
    vector <int> nums1;
    vector <int> nums2;
    int m,n;

}