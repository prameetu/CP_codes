//leetcode - 206
//reverse linked list
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
};