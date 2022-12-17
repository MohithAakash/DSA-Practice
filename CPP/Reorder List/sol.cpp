#include <bits/stdc++.h> 
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution{ 
public:
    Node* listPartition(Node* head) {
        Node *slow = head, *slowPrev=NULL, *fast = head;
        while(fast && fast->next) {
            slowPrev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(slowPrev) slowPrev->next = NULL;
        return slow;
    }
    Node *reverseList(Node* head) {
        Node *prev = NULL, *nxt = NULL, *curr = head;
        while(curr) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    void reorderList(Node* head) {
        if(!(head->next)) return;
        Node* head1 = head;
        Node* head2 = reverseList(listPartition(head));
        Node* temp;
        while(head1 && head2) {
            temp = head1->next;
            head1->next = head2;
            head1 = temp;
            if(!head1) return;
            temp = head2->next;
            head2->next = head1;
            head2 = temp;
        }
    }
};
