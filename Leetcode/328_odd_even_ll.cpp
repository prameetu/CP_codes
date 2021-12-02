#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
            return head;
        ListNode *head_even;
        ListNode *p,*q;

        p = head;
        q = head->next;
        head_even = head->next;

        while(q && q->next)
        {
            p->next = q->next;
            p = p->next;

            q->next = p->next;
            q = q->next;

        }

        p->next = head_even;

        return head;

    }
};