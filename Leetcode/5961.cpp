#include<bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

class Solution {
public:
    int pairSum(ListNode* head) {
        vector <int> nums;
        while(head){
            nums.push_back(head->val);
            head = head->next;
        }
        int n(nums.size());
        int i(0),j(n-1);
        int ans(INT_MIN);
        while(i<j)
        {
            ans = max(ans,nums[i]+nums[j]);
            i++;
            j--;
        }
        return ans;
    }
};