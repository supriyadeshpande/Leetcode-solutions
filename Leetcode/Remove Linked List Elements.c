/******************

Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5



******************/


/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode removeElements(ListNode head, int val) {
        if(head == null)
            return head;
        
        while (head.val == val)
        {
            if(head.next != null)
                head = head.next;
            else
                return null;
        }
        ListNode cur = head;
        ListNode prev = head;
        while(cur.next != null)
        {
            if(cur.val == val)
            {
                prev.next = cur.next;
            }
            else
            {
                prev = cur;
            }
            cur = cur.next;
            
        }
        if(cur.next == null && cur.val == val)
            prev.next = null;
        return head;
        
    }
}