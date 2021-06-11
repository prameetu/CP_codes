//leetcode - 201
//intersection of linked ListNode
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode dummy_head = new ListNode(0);
        dummy_head->next = head;
        ListNode *temp(head);
        int length(0);
        while(temp)
        {
            length++;
            temp=temp->next;
        }   
        length-=n;
        temp = dummy_head;
        while(length>0)
        {
            length--;
            temp=temp->next;
        } 
        temp->next = temp->next->next;
        return dummy_head->next;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* dummy_head = new ListNode(0);
        dummy_head->next = head;
        ListNode *slow(dummy_head),*fast(dummy_head);
        for(int i=0;i<n;i++)
            fast=fast->next;
        
        while(fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }

        slow->next = slow->next->next;
        return dummy_head->next;
        
        return dummy_head->next;
    }

};