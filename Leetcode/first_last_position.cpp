//Leetcode - 34
#include<bits/stdc++.h>

using namespace std;
//O(n)
vector<int> search_Range(vector<int>& nums, int target) 
{
    vector <int> v;
    int i(0),j(nums.size()-1);
    while(i<j)
    {
        if(nums[i] < target)
            i++;
        if(nums[j] > target)
            j--;
        if(nums[i] == nums[j] && nums[i] == target)
        {
            v = {i,j};
            return v;
        }
    }
    v = {-1,-1};
    return v;

}

int first_occurence(vector <int>&nums,int target)
{
    int res(-1);
    int n = nums.size();
    int l(0),h(n-1);
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(nums[mid] < target)
            l = mid + 1;
        else if (nums[mid] > target)
            h = mid - 1;
        else if(nums[mid] == target)
        {
            res = mid;      // If arr[mid] is same as x, we
            h = mid - 1;    // update res and move to the left half
        }
    }
    return res;
}

int last_occurence(vector <int>&nums,int target)
{
    int res(-1);
    int n = nums.size();
    int l(0),h(n-1);
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(nums[mid] < target)
            l = mid + 1;
        else if (nums[mid] > target)
            h = mid - 1;
        else if(nums[mid] == target)
        {
            res = mid;      // If arr[mid] is same as x, we
            l = mid + 1;    // update res and move to the right half
        }
    }
    return res;
}

vector<int> searchRange(vector<int>& nums, int target) 
{
    vector <int> ans(2,0);
    ans[0] = first_occurence(nums,target);
    ans[1] = last_occurence(nums,target);

    return ans;
}

int main()
{
    vector <int> v;
    int n,x;
    cin >> n;
    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }

    int target;
    cin >> target;

    vector <int> ans;
    ans = searchRange(v,target);

    for(auto y:ans)
        cout << y << " ";
}