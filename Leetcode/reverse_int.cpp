
//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include<iostream>

using namespace std;

int reverse(int x)
{
    int rem = 0 ,rev_no = 0 ;
    while(x!=0)
    {
        if(rev_no > INT32_MAX/10)
            return 0;
        if(rev_no < INT32_MIN/10)
            return 0;
        rem = x%10;
        rev_no = (rev_no * 10) + rem;
        x=x/10;
    }

    return rev_no;
}

int main()
{
    int x;
    cin >> x;
    cout << INT32_MAX;
    cout << reverse(x);
}