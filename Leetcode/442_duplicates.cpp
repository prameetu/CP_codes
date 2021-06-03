#include<bits/stdc++.h>

using namespace std;

vector <int> findDuplicate(vector<int>& nums) 
{
    vector <int> ans;
    int n(nums.size());
    for(int i=0;i<n;i++)
    {
        int index = abs(nums[i]) - 1;
        if(nums[index] >= 0)
            nums[index] = -nums[index];
        else
            ans.push_back(index+1);
    }
    

    return ans;
}

int main()
{

}