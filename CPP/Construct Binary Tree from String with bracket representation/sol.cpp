#include <bits/stdc++.h> 
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
class Solution{
public:

    Node* func(int &i, string s){
        int j=i;
        while(s[j]<='9' && s[j]>='0') j++;
        Node* root = new Node(stoi(s.substr(i,j)));
        if(s[++i]==')') 
            return root;
        root->left = func(++i, s);
        if(s[++i]==')') 
            return root;
        root->right = func(++i, s);
        return root;
    }
    // function to construct tree from string
    Node *treeFromString(string str){
        int i = 0;
        return func(i, str+')');
    }
};