// https://practice.geeksforgeeks.org/problems/length-of-longest-palindrome-in-linked-list/1

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


/*The function below returns an int denoting
the length of the longest palindrome list. */
int maxPalindrome(Node *head)
{
    Node *prev=NULL, *next=NULL, *curr=head;
    while (curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    
}
