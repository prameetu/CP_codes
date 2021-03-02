#include<iostream>
#include<list>
#include<vector>


using namespace std;

struct ListNode 
{
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
    public:
        ListNode * addtwonumbers(ListNode *l1,ListNode *l2)
        {
        ListNode *final_sum = new ListNode();
        ListNode *temp,*p;
        int sum = 0, carry = 0;
        temp = final_sum;
        
        while(l1 || l2 || carry)
        {
            sum = 0;
            
            if(l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            
            
            sum += carry;
            
            carry = sum / 10;
            p = new ListNode(sum % 10);
            temp->next =  p;
            temp = temp->next;
           
        }
        return final_sum->next;
    }

        
};

int main()
{

}