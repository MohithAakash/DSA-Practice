package GFG.polynomial_add;

// https://practice.geeksforgeeks.org/problems/polynomial-addition/1

class Node{
    int coeff;
    int pow;
    Node next;
    Node(int a,int b)
    {
        coeff=a;
        pow=b;
        next=null;
    }
}

class Solution
{
    public static Node addPolynomial(Node p1,Node p2)
    {

        Node sum = new Node(0, 0);
        Node head = sum;

        while (p1!=null && p2!=null) {

            if (p1.pow > p2.pow) {
                sum.next = p1;
                p1 = p1.next;
            }
            else if (p2.pow > p1.pow) {
                sum.next = p2;
                p2 = p2.next;
            }
            else{
                sum.next = new Node(p1.coeff + p2.coeff, p1.pow);
                p1 = p1.next;
                p2 = p2.next;
            }
            sum = sum.next;

        }

        if (p1!=null) {
            sum.next = p1;
        }

        if (p2!=null){
            sum.next = p2;
        }

        return head.next;
    }
}

