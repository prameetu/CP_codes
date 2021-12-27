#include <bits/stdc++.h>

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
    ListNode *removeZeroSumSublists(ListNode *head)
    {
        ListNode *dummy_node = new ListNode(0);
        dummy_node->next = head;

        ListNode *temp(dummy_node);

        while (temp)
        {
            int curr_sum(0);

            ListNode *temp2(temp->next);
            while (temp2)
            {
                curr_sum += temp2->val;
                if (curr_sum = 0)
                {
                    temp1->next = temp2->next;
                }
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
        return dummy_node->next;
    }
};