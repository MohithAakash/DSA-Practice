// /**
//  * Definition for singly-linked list.
//  * public class ListNode {
//  *     int val;
//  *     ListNode next;
//  *     ListNode() {}
//  *     ListNode(int val) { this.val = val; }
//  *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
//  * }
//  */
// class Solution {
//     public boolean isPalindrome(ListNode head) {
//         ListNode slow = head, fast = head, prev, nxt_node;
//         while(fast!=null && fast.next!=null){
//             slow = slow.next;
//             fast = fast.next.next;
//         }
//         // Middle of linked list is at slow.
//         prev=slow;
//         slow = slow.next;
//         prev.next = null;

//         // Reverse the second half of the linked list.
//         while(slow!=null){
//             nxt_node = slow.next;
//             slow.next = prev;
//             prev = slow;
//             slow = nxt_node;
//         }
//         // Compare the first and second half of the linked list.
//         fast=head;
//         slow=prev;
//         while(slow!=null){
//             if(fast.val != prev.val){
//                 return false;
//             }
//             fast = fast.next;
//             slow = slow.next;
//         }

//         return true;

//     }
// }