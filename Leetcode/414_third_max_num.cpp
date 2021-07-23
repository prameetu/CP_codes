//LEETCODE - 414
//Third max number

#include<bits/stdc++.h>

using namespace std;

int thirdMax(vector<int>& nums) {
	
    set<int> s(nums.begin(), nums.end());
    if(s.size() < 3)
        return *s.rbegin();

    auto it = s.begin();
    advance(it, s.size() - 3);
    return *it;
}

int thirdMax(vector<int>& nums) 
{
    int max = NULL;
    int second_max = NULL;
    int third_max = NULL;

    for(int x:nums)
    {
        if(x==max || x==second_max || x== third_max)
            continue;

        if(max==NULL||x>max)
        {
            third_max = second_max;
            second_max = max;
            max = x;
        }
        else if(second_max==NULL||x>second_max)
        {
            third_max = second_max;
            second_max = x;
        }

        else if(third_max==NULL||x>third_max)
            third_max = x;

    }

    if(third_max == NULL)
        return max;

    return third_max; 
}

int main()
{

}