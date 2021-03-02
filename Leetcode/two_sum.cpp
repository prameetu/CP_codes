#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        vector <int> twoSum(vector<int> &nums,int target)
        {
            vector <int> ans;

            for(auto i=nums.begin();i!=nums.end();i++)
            {
                for(auto j=nums.begin(); j!=nums.end();j++)
                {
                    if(*i + *j == target)
                    {
                        ans.push_back(*i);
                        ans.push_back(*j);
                        break;
                    }
                }
            } 
            return ans;
        }
};
