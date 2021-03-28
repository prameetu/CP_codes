#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int r,o,c;
    cin >> r >> o >> c;
    int runs_reqd = r-c+1;
    int max_runs = (20-o)*36;
    if(runs_reqd > max_runs)
        cout << "NO";
    else 
        cout << "YES";

}
