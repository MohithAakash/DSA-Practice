// https://practice.geeksforgeeks.org/problems/bst-to-greater-sum-tree/1


struct Node
{
	int data;
	struct Node *left, *right;
};


class Solution
{
    public:
    int sum=0;
    void transformTree(struct Node *root)
    {
        sum_nodes(root);
        update_nodes(root);
    }

    void sum_nodes(struct Node *root){
        if (!root) return;
        sum_nodes(root->left);
        sum+=root->data;
        sum_nodes(root->right);       
    }

    void update_nodes(struct Node *root){
        if (!root) return;
        update_nodes(root->left);
        sum=sum-(root->data);
        root->data = sum;
        update_nodes(root->right);        
    }
};
