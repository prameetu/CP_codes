
#include<iostream>
#include<vector> 
#include<math.h>

using namespace std;

int max_water(vector <int> height)
{
    int water_collected(0),max_water_collected(0),b;

    for(int i=0;i<height.size();i++)
    {
        for(int j=i+1;j<height.size();j++)
        {
            b=j-i;
            water_collected = min(height[i],height[j]) * b;
            max_water_collected = max(max_water_collected,water_collected);
        }
    }

    return max_water_collected;
}

int max_water_optimized(vector <int> height)
{
    int l(0);
    int r = height.size()-1;
    int max_area(0);
    int a;

    while(l < r)
    {
        a =  min(height[l],height[r]) * (r-l);
        max_area = max(max_area , a );

        if(height[l] <= height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    return max_area;
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

    cout << max_water_optimized(height);

}