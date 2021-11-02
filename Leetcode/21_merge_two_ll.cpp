//leetcode - 21
//merge two sorted linked lists
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;
        ListNode *i(l1),*j(l2);
        ListNode *head = nullptr;
        ListNode *temp = head;
        if(i->val < j->val)
        {
            head = i;
            temp = i;
            i=i->next;
            temp->next = nullptr;
        }
        else
        {
            head = j;
            temp = j;
            j=j->next;
            temp->next = nullptr;
        }
        
        while(i && j)
        {
            if(i->val < j->val)
            {
                temp -> next = i;
                temp = temp->next;
                i=i->next;
                temp->next = nullptr;
            }
            else
            {
                temp -> next = j;
                temp = temp->next;
                j=j->next;
                temp->next = nullptr;
            }
        }
        if(i == nullptr)
            temp -> next = i;
    
        if(j==nullptr)
            temp->next = j ;
        
        return head;
    }

    ListNode* mergeTwoLists(ListNode *l1,ListNode *l2)
    {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        return new ListNode(min(l1->val,l2->val),l1->val < l2->val ? mergeTwoLists(l1->next,l2) : mergeTwoLists(l1,l2->next));
    }
};