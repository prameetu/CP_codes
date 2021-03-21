//MAJORITY ELEMENT PROBLEM
//LEETCODE 

#include<iostream>
#include<vector>

using namespace std;

void majority_element(vector <int> v)
{
    int count(0);
    int element(0);
    for(auto num : v)
    {
        if(count == 0)
            element = num;

        if(element == num)
            count += 1;
        else    
            count -= 1;
    }

    int freq_element(0);

    for(auto num : v)
    {
        if(num == element)
            freq_element++;
    }

    if(freq_element > v.size()/2)
        cout << "The majority element is " << element << " with a count of: " << freq_element << endl;
    else
        cout << "There is no majority element";
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

    majority_element(v);
}