#include<iostream>
#include<vector>

using namespace std;

void beautiful_permutations(int n)
{
    int x;
    vector <int> v_even;
    vector <int> v_odd;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            v_even.push_back(i);
        else
            v_odd.push_back(i);
    } 

    for(auto x:v_even)
        cout << x << " ";
    for(auto y:v_odd)
        cout << y << " ";

}


int main()
{
    int n;
    cin >> n;

    if(n==3 || n==2)
    {
        cout << "NO SOLUTION";
    } 

    else
    {
        beautiful_permutations(n);
    }
}