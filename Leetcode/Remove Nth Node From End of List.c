/******************

Given a linked list, remove the nth node from the end of list and return its head.

Given n will always be valid.
Try to do this in one pass.
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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
       if(head == null)
            return null;
        ListNode cur = head;
        int count = 0, i=0;
        while (cur != null)
        {
            count++;
            cur = cur.next;
        }
        if(n > count)
            return head.next;
        else if (n==count)
        {
            head = head.next;
            return head;
        }
        else {
            cur = head;
            for(i = 0; i < count - n-1; i++)
            {  
                cur = cur.next;
            }   
            if(cur.next != null)
                cur.next = cur.next.next;
            else
                cur.next = null;
        }
        return head;
        
        
    }
}