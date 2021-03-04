#include<iostream>

using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int rem = 0 ,rev_no = 0 ;
        int temp = x;
        if(x<0)
            return false;
        else
            while(x!=0)
            {
                if(rev_no > INT32_MAX/10)
                    return false;
                if(rev_no < INT32_MIN/10)
                    return false;
                rem = x%10;
                rev_no = (rev_no * 10) + rem;
                x=x/10;
            }
            if(temp == rev_no)
                return true;
            else
                return false;
        
            
    }
};