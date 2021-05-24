#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) 
{
    vector <int> ans(2,0);
    int i(0),j(numbers.size()-1);
    while(i<j)
    {
        if(numbers[i] + numbers[j] > target)
            j--;
        else if (numbers[i] + numbers[j] < target)
            i++;
        else
            break;
    }
    ans[0] = i;
    ans[1] = j;

    return ans;
}

int main()
{
    vector <int> v;
    int n,x;
    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }
    int target;
    cin >> target; 


}