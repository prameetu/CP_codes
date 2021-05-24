#include <bits/stdc++.h>

using namespace std;

void ans()
{
    vector <float> age_groups(11,0);
    float p,g,x;
    cin >> g >> p;
    for(float i=1;i<=10;i++)
    {
        cin >> x;
        age_groups[i] = x;
    }
    float people_left ;
    float max_days(0),min_days(0);
    float days(0);
    float j(10);
    while(j > g)
    {
        days += age_groups[j];
        j--;
    }
    max_days = ceil((days + age_groups[g])/p);
    min_days = ceil((days + 1)/p);

    cout << min_days << " "<< max_days << endl;;

}

int main()
{
    
    float t;
    cin >> t;
    while(t--){
        ans();
    }  
}