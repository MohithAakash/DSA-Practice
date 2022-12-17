// https://practice.geeksforgeeks.org/problems/next-right-node/1
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

    }

    return 0;
}

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    Node *nextRight(Node *root, int key)
    {
        if(root==NULL) return new Node(-1);
        queue<Node*> q;
        Node* x=root;
        q.push(x);
        while(!q.empty()){
            queue<Node*> q2;
            while(!q.empty()){
                x=q.front();
                q.pop();
                if(x->data==key){
                    if(!q.empty()) return q.front();
                    else return new Node(-1);
                }
                if(x->left) q2.push(x->left);
                if(x->right)q2.push(x->right);
            }
            q=q2;
        }
        return new Node(-1);
    }
};