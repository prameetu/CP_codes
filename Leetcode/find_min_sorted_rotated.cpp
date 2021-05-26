//leetcode - 153
//Find Minimum in Rotated Sorted Array
#include<bits/stdc++.h>

using namespace std;

int findMin(vector<int>& nums) 
{
    int min(50001);
    int n = nums.size();
    int l(0),h(n-1);

    while(l<=h)
    {
        int mid = (l+h)/2;
        if(nums[mid] >= nums[l])         //left part of array is sorted
        {
            int temp_min = nums[l];
            if(min> temp_min)
                min = temp_min;
            l = mid +1;
        }
        else
        {
            int temp_min = nums[mid];       //right part ofarray is sorted
            if(min> temp_min)
                min = temp_min;
            h=mid-1;
        }
    }   
    return min;
}

int main()
{
    
}