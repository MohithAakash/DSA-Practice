package bst_nodes;

// https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1

class Node {
    int data;
    Node left, right;
    public Node(int item)
    {
        data = item;
        left = right = null;
    }
}

class Solution
{
    //Function to count number of nodes in BST that lie in the given range.
    int count=0;
    int getCount(Node root,int l, int h)
    {
        countNodes(root, l, h);
        return count;
    }

    void countNodes(Node root,int l, int h){
        if(root==null) return;

        if(root.data>h) 
            countNodes(root.left, l, h);
        else if(root.data<l) 
            countNodes(root.right, l, h);
        
        else{
            count+=1;
            countNodes(root.left, l, h);
            countNodes(root.right, l, h);
        }
    }
    
}



