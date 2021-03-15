//ARRAY PREPROCESSING

#include<iostream>
#include<vector> 
#include<math.h>
using namespace std;

int trap(vector <int> height)
{
    vector <int> left;
    vector <int> right(height.size(),0);
    int maxi = -1;
    for(int i=0;i<height.size();i++)
    {
        maxi = max(maxi,height[i]);
        left.push_back(maxi);
    }
    maxi=-1;
    for(int j=height.size()-1;j>=0;j--)
    {
        maxi = max(maxi,height[j]);
        right[j] = maxi;
    }

    int water_trapped = 0;
    
    for(int i=0;i<height.size();i++)
    {
        water_trapped = water_trapped + (min(left[i],right[i]) - height[i]);
    }

    return water_trapped;
}

int main()
{
    int n,x;
    cin >> n;
    vector <int> height;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        height.push_back(x);
    }

    int water_collected;
    cout << trap(height);

}