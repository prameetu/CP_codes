#include<bits/stdc++.h>

using namespace std;

int search_insert_pos(vector <int> &nums,int target)
{
    int l(0),h(nums.size()-1);
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
    return l;

}


int main()
{
    vector <int> v{1,3,5,6,9};
    int target;
    cin >> target;

    cout << search_insert_pos(v,target);
}