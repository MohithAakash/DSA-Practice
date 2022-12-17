#include <bits/stdc++.h> 
using namespace std;


struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};


// Function to find ceil of a given input in BST. If input is more 
// than the max key in BST, return -1 
int inOrderSum(Node* root, int &k, int sum){
    if(root==NULL) return 0;

    if(k>0) sum+=inOrderSum(root->left, k, sum);
    if(k>0) {sum=sum+(root->data); k--;}
    if(k>0) sum+=inOrderSum(root->right, k, sum);

    return sum; 
}
int sum(Node* root, int k) 
{
    int sum = inOrderSum(root, k, 0);
    if(!k) return sum;
    return -1;
}
