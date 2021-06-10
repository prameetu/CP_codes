//leetcode - 234
//palidrome linked list
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
 
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        if(head==nullptr)
            return false;
            
        ListNode *temp(head);
        string s = "";    
        while(temp)
        {
            s += to_string(temp->val);
            temp = temp->next;
        }
        int size(s.size());
        int i(0),j(s.size()-1);
        while(i<j)
        {
            if(s[i] != s[j])
                return false;
            i++;j--;
        }
        return true;
    }
    
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *p,*q,*r;
        q = nullptr;
        r = nullptr;
        p = head;
        while(p)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }   
        return q; 
    }
    
    bool isPalindrome(ListNode* head) 
    {
        if(head == nullptr || head->next == nullptr)
            return true;

        //finding middle of linked list
        ListNode *slow(head),*fast(head);
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        //slow is middle of linked list
        //we reverse the list after the slow pointer
        slow->next  = reverseList(slow->next);
        slow = slow->next;

        ListNode * temp(head);
        while(slow)
        {
            if(temp->val != slow->val)
                return false;
            temp = temp->next;
            slow = slow->next; 
        }
        return true;
    }
};