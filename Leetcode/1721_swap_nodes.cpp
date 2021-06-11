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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode *p(head), *q(head), *kth = NULL;
        while (--k)
            p = p->next;
        
        kth = p;
        p = p->next;
        
        while (p) {
            p = p->next;
            q = q->next;
        }
        swap(q->val, kth->val);
        return head;


    }

};