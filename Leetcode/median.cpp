//LEETCODE -4
//MEDIAN OF TWO SORTED ARRAYS

#include<iostream>
#include<vector>

using namespace std;

double median(vector <double> num1, vector <double> num2)
{
    double i(0),j(0);
    vector <double> sorted;
    while(i < num1.size() && j < num2.size() )
    {
        if(num1[i] > num2[j])
        {
            sorted.push_back(num2[j]);
            j++;
        }
        else
        {
            sorted.push_back(num1[i]);
            i++;
        }
    }

    for(;i<num1.size();i++)
    {
        sorted.push_back(num1[i]);
    }
    for(;j<num2.size();j++)
    {
        sorted.push_back(num2[j]);
    }

    double median;
    if(sorted.size() % 2 == 0)
        median = (sorted[sorted.size()/2] + sorted[sorted.size()/2 - 1])/2;
    else
        median = sorted[sorted.size()/2];
    
    return median;

    
}       


int main()
{
    double n_num1,n_num2;
    cin >> n_num1 >> n_num2;
    vector <double> num1,num2;
    double x;
    for(double i=0;i<n_num1;i++)
    {
        cin >> x;
        num1.push_back(x);
    }
    for(double i=0;i<n_num2;i++)
    {
        cin >> x;
        num2.push_back(x);
    }

    cout << median(num1,num2);
}