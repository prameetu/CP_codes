//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
//leetcode - 229

#include<iostream>
#include<vector>

using namespace std;

vector <int> majority_element(vector <int> nums)
{
    int m1(-1),m2(-1); // Taking a and b as the majority element
    int c1(0),c2(0);//Maintaing the count of majority element

    for(auto x:nums)
    {
        if(x == m1)
            c1++;
        else if(x == m2)
            c2++;
        else if(c1 == 0)
        {
            m1 = x;
            c1++;
        }
        else if(c2 == 0)
        {
            m2 = x;
            c2++;
        }
        else
        {
            c1--;
            c2--;
        }

    }

    int c1(0),c2(0);
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == m1)
            c1++;
        else if(nums[i] == m2)
            c2++;
    }

    vector<int> ans;
    if (c1 > nums.size() / 3) ans.push_back(m1);
    if (c1 > nums.size() / 3) ans.push_back(m2);

    return ans;
}

int main()
{
    int n,x;
    vector <int> v;
    cin >> n;
    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }

    vector <int> ans = majority_element(v);
}