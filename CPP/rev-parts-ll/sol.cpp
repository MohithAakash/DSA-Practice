// https://practice.geeksforgeeks.org/contest/interview-series-59/problems/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Solution
{
public:
    Node *reverse(Node *head, int k)
    {
        Node *curr = head;
        Node *prev = NULL, *next = NULL, *knext;

        while (k--)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        knext = head;
        head = prev;
        prev = NULL, next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        knext->next=prev;

        return head;
    }
    // void rev(Node *prev, Node *curr, Node *next){
    //     next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    // }
};
