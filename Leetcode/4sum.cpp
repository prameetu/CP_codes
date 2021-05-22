//LEETCODE - 18

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> foursum(vector<int>& nums,int target) 
{
    vector <vector <int>> res;
    if(nums.size() < 4)
        return res;
    sort(nums.begin(),nums.end());
    int i(0);
    while(i < nums.size()-3)
    {
        int j(i+1);
        while(j<nums.size()-2)
        {
            int target2 = target - (nums[i]+nums[j]);
            int low = j+1;
            int high = nums.size()-1;
            while(low < high)
            {
                if(nums[low] + nums[high] > target2)
                {
                    high--;
                }
                else if(nums[low] + nums[high] < target2)
                {
                    low++;
                }
                else
                {
                    vector<int> sum = {nums[i],nums[j],nums[low], nums[high]};
                    res.push_back(sum);

                    while(low < high && nums[low] == sum[2]) low++;
                    
                    while(low < high && nums[high] == sum[3]) high--;
                }
            }
            int x = nums[j];
            while(j < nums.size() && nums[j] == x) j++;
        }
        int x = nums[i];
        while(i < nums.size() && nums[i] == x) i++;
    }

    return res;

}


int main()
{
    int n,target(0);
    vector <int> nums{1,0,-1,0,-2,2};

    vector <vector <int>> v = foursum(nums,target);

    for(auto x:v)
        for(auto y:x)
            cout << y << " ";
        cout << endl;
}