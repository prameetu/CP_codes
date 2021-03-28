#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t,x;
    int n,m;
    vector <int> cricket;
    vector <int> football;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        football.clear();
        cricket.clear();
        cin >> n >> m;


        for(int j=0;j<n;j++)
        {
            cin >> x;
            football.push_back(x);
        }

        for(int j=0;j<m;j++)
        {
            cin >> x;
            cricket.push_back(x);
        }

        int current(1);
        //1 for footbal and 0 for cricket
        
        int f(0),c(0);
        int switches(0);

        while(f<n && c<m)
        {
            if(football[f] < cricket[c])
            {
                if(current == 0)
                {
                    switches++;
                    current = 1;
                }
                    
                f++;
            }
            else
            {
                if(current == 1)
                {
                    switches++;
                    current = 0;
                }
                c++;   
            }
        }

        for(;f<n;f++)
        {
            if(current == 0)
            {
                switches++;
                current = 1;
            }
        }
        for(;c<m;c++)
        {
            if(current == 1)
            {
                switches++;
                current = 0;
            }
        }
    
        cout << switches << endl;
    }

}