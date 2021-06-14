//lniked list cycle 2
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
 
class Solution {
public:
    
    ListNode *detectCycle(ListNode *head)       //O(n) time O(1) space
    {
        

        unordered_set <ListNode *> s;
        ListNode *temp(head); 
        while(temp)
        {
            if(s.find(temp) != s.end())
                return temp;
            s.insert(temp);
            temp  = temp->next;
        }
        return nullptr;

    }

    ListNode *detectCycle(ListNode *head)       
    {
        if(head ==  nullptr || head == nullptr)
            return nullptr;

        ListNode *slow(head),*fast(head);
        ListNode *temp(head);
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                while(slow != temp)
                {
                    slow = slow->next;
                    temp = temp->next;
                }
                return temp;
            }
  
        }
        
        return nullptr;

    }
};
int main()
{

}