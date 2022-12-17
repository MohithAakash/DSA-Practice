// 7/12/22 - https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1

#include <bits/stdc++.h> 
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        Node *prev, *curr = root;
        int count = 0, ans = -1;
        while (curr)
        {
            if(curr->left == NULL) {
                curr = curr->right;
                count++;
                if(count == K) ans = curr->data;

            }
            else {
                prev = curr->left;
                while (prev->right && prev->right != curr) {
                    prev = prev->right;
                }
                if(prev->right == NULL) {
                    prev->right = curr;
                    curr = curr->left;
                }
                else {
                    prev->right = NULL;
                    count++;
                    if(count == K) ans = curr->data;
                    if(count >= K) break;
                    curr = curr->right;
                }
            }
        }
        
    }
};