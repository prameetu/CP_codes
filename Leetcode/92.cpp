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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy_head = new ListNode(-1);
        dummy_head->next = head;
        ListNode *p(dummy_head),*q(head);


        for(int i=0;i<left-1;i++)
        {
            p = p->next;
            q = q->next;
        }
        ListNode *temp;
    
        for(int i=1;i<=right-left;i++)
        {
            temp = q->next;
            q->next = q->next->next;

            temp->next = p->next;
            p->next = temp; 
        }
        return dummy_head->next;
        

        return dummy_head->next;



    }
};