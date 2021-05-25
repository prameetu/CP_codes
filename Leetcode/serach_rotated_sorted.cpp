#include<bits/stdc++.h>

using namespace std;

int binary_search(int l,int h ,vector <int> &nums,int target)
{
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(target > nums[mid])
            l = mid+1;
        else if (target < nums[mid])
            h = mid-1;
        else if (target == nums[mid])
            return mid;    
    }
    return -1;
}

int search(vector<int>& nums, int target) 
{
    int n(nums.size());
    int s;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i] > nums[i+1])
        {
            s=i;
            break;
        }
    }
    int first_search(-1),second_search(-1);
    first_search = binary_search(0,s,nums,target);
    second_search = binary_search(s+1,n-1,nums,target);
    
    if(first_search != -1)
        return first_search;
    else
        return second_search;
}

int search_opti(vector<int>& nums, int target) 
{
    int l(0),h(nums.size()-1);
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(nums[mid] ==  target)
            return mid;
        else if(nums[l] < nums[mid])        //left part of array is sorted
        {
            if(target >= nums[l] && target < nums[mid])
                h = mid-1;
            else
                l = mid+1;
        }   
        else                                // right part of array is sorted
        {
            if(target > nums[mid] && target <= nums[h])
                l = mid + 1;
            else
                h = mid  - 1;
        }     
    }
    return -1;

}

int main()
{
    int n,x;
    cin >> n;
    vector <int> v;
    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }
}