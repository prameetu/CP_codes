#include<bits/stdc++.h>

using namespace std;

int number_of_digits(int x)
{
    int cnt(0);
    while(x>0)
    {
        cnt++;
        x=x/10;
    }

    return cnt;
}

int main()
{
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;

        if(n<10)
            cout << n << endl;
        else
        {
            int no_digits = number_of_digits(n);
            int cnt = no_digits;
            int first_divisor(0);

            while(cnt > 0)
            {
                first_divisor = first_divisor*10 + 1;
                cnt--;
            }
            int a = n/first_divisor;

            int sum = a + 9*(no_digits-1);

            cout << sum << endl; 
        }

    }
}