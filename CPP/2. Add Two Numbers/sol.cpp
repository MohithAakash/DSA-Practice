#include <bits/stdc++.h> 
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(), *tail = head;
        int carry = 0;
        while (l1 || l2 || carry) {
            ListNode* node = new ListNode();
            int val1 = 0, val2 = 0;
            if(l1) {
                val1 = l1->val;
                l1 = l1->next;
            }
            if(l2) {
                val2 = l2->val;
                l2 = l2->next;
            }
            node->val = (val1 + val2 + carry) % 10;
            carry =  (val1 + val2 + carry) / 10;
            tail->next = node;
            tail = tail->next;
        }
        return head->next;
    }
};