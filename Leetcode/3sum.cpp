//LEETCODE - 15

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) 
{
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < nums.size())
        {
            int target = -nums[i];
            int low = i + 1;
            int high = nums.size()-1;
            while(low < high)
            {
                if(nums[low] + nums[high] > target)
                {
                    high--;
                }
                else if(nums[low] + nums[high] < target)
                {
                    low++;
                }
                else
                {
                    vector<int> sum = {nums[i], nums[low], nums[high]};
                    res.push_back(sum);
                    
                    while(low < high && nums[low] == sum[1]) low++;
                    
                    while(low < high && nums[high] == sum[2]) high--;
                }
            }
            int x = nums[i];
            while(i < nums.size() && nums[i] == x) i++;
        }
        return res;
}

vector<vector<int>> three_sum(vector<int>& nums) 
{
    vector <vector <int>> ans;
    set <vector <int> > s;
    sort(nums.begin(),nums.end());
    vector <int> v;

    for(int i=0;i<nums.size()-2;i++)
    {
        int target = -nums[i];
        int l(i+1),h(nums.size()-1);
        
        while(l<h)
        {
            if(nums[l]+nums[h] < target)
                l++;

            else if(nums[l]+nums[h] > target)
                h--;

            else if(nums[l]+nums[h] == target)
            {
                v.push_back(nums[i]);
                v.push_back(nums[l]);
                v.push_back(nums[h]);
                s.insert(v);
                l++;h--;
                v.clear();
            }
        }
    }
    for(auto i = s.begin(); i != s.end(); i++)
    {
        ans.push_back(*i);
    }
    return ans;
}

int main()
{
    int n;
    vector <int> nums{-1,0,1,2,-1,-4};

    vector <vector <int>> v = three_sum(nums);

    for(auto x:v)
        for(auto y:x)
            cout << y << " ";
        cout << endl;
}