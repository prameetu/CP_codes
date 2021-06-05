//leetcode - 231
// Power of Two
#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) 
{
    if(n <= 0)
        return false;
    n = n&n-1;
    return !n;      
}
int main()
{

}