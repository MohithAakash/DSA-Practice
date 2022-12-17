#include <bits/stdc++.h> 
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> st1, st2;
        st1.push(root1);
        st2.push(root2);
        while (!st1.empty() && !st2.empty()) {
            TreeNode *node1, *node2;
            while (!st1.empty()) {
                node1 = st1.top();
                st1.pop();
                if(!node1->left && !node1->right) break;
                if(node1->right) st1.push(node1->right);
                if(node1->left) st1.push(node1->left);
            }
            while (!st2.empty()) {
                node2 = st2.top();
                st2.pop();
                if(!node2->left && !node2->right) break;
                if(node2->right) st2.push(node2->right);
                if(node2->left) st2.push(node2->left);
            }

            if(!node1 || !node2 || node1->val != node2->val) return false;
        }

        return (st1.empty() && st2.empty());
        
    }
};