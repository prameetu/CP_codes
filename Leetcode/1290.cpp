//leetcode - 1290 
#include<bits/stdc++.h>

using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//this gives TLE
int getDecimalValue(ListNode* head) 
    {
        ListNode *temp = head;
        int cnt(0);
        while(temp)
        {
            cnt++;
            temp = temp->next;
        }
        temp = head;
        int i = cnt-1;
        int res(0);
        while(temp)
        {
            if(temp->val == 1)
            {
                res += pow(2,i);
            }
            i--;
        }
        return res;
    }

int getDecimalValue(ListNode* head) 
{
    ListNode * temp;
    temp = head;
    int res(0);
    while(temp)
    {
        res = (res << 1) + temp->val; // res = res*2 + temp->val
        temp = temp ->next;
    }

    return res;
}


int main()
{

}