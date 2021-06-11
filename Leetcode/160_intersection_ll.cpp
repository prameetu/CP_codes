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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int lenA(0),lenB(0);
        ListNode *temp;
        temp = headA;
        while(temp)
        {
            lenA++;
            temp=temp->next;
        }    
        temp = headB;
        while(temp)
        {
            lenB++;
            temp=temp->next;
        }   
        if(lenA > lenB)
        {
            ListNode *p(headA),*q(headB);
            int dif(lenA-lenB);
            for(int i=0;i<dif;i++)
            {
                p = p->next;
            }
            if(p==q)
                return p;
            while(p && q)
            {
                if(p->next == q->next)
                    return p->next;
                p=p->next;
                q=q->next;
            }
        }
        else
        {
            ListNode *p(headA),*q(headB);
            int dif(lenB-lenA);
            for(int i=0;i<dif;i++)
            {
                q = q->next;
            }
            if(p==q)
                return p;
            while(p && q)
            {
                if(p->next == q->next)
                    return p->next;
                p=p->next;
                q=q->next;
            }
        }
        return nullptr;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if(headA==nullptr || headB=nullptr)
            return nullptr;
        
        ListNode *a(headA),*b(headB);
        while(a!=b)
        {
            if(a==nullptr)
                a = headB;
            else
                a = a->next;

            if(b==nullptr)
                b = headA;
            else
                b = b->next;    
        }

        return a;
    }

};