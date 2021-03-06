/*
********************************
Given a singly linked list, group all odd nodes together followed by the even nodes. Please note here we are talking about the node number and not the value in the nodes.

You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.

Example:
Given 1->2->3->4->5->NULL,
return 1->3->5->2->4->NULL.

Note:
The relative order inside both the even and odd groups should remain as it was in the input. 
The first node is considered odd, the second node even and so on ...
*********************************
*/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode oddEvenList(ListNode head) {
        
        if(head == null)
            return null;
        ListNode even = head.next;
        ListNode cur1 = head, cur2 = even;
        
        while(cur1 != null && cur2 != null)
        {
            if((cur1.next = cur2.next) == null)
                break;
            cur1 = cur1.next;
            
            if((cur2.next = cur1.next) == null)
                break;
            cur2 = cur2.next;
        }
        cur1.next = even;
        return head;
        
    }
}