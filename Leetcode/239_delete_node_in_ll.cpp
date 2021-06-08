//leetcode - 876
//delete node in ll
//not so good ques

#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void deleteNode(ListNode* node) 
{
    auto next = node->next;
    *node = *next;
    delete next;
}


int main()
{

}