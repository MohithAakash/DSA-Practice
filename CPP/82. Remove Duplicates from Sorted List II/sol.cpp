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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) 
            return head;
        ListNode *ptr = head, *prev = NULL;
        while (ptr && ptr->next) {
            if(ptr->val == ptr->next->val) {
                while(ptr->next && ptr->val == ptr->next->val ) {
                    ptr = ptr->next;
                }
                ptr = ptr->next;
                if(prev)
                    prev->next = ptr;
                else
                    head = ptr;
            }
            else {
                prev = ptr;
                ptr = ptr->next;
            }
        }

        return head;
        
    }
};
