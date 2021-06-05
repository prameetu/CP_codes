//leetcode - 190
//Reverse Bits

#include<bits/stdc++.h>

using namespace std;

uint32_t  reverseBits(uint32_t n) 
{
    uint32_t result= 0;
    for(int i=0; i<32; i++)
    {
        result = result << 1;
        if(n & 1)
            result++;
        n = n >> 1;
    }
        
    return result;
}
uint32_t reverseBits(uint32_t n) 
{
        
}
int main()
{

}