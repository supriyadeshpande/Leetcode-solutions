/******************

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

Write a program to find the node at which the intersection of two singly linked lists begins.


Notes:

If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.

******************/


/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public int count (ListNode node)
    {
        int count = 0;
        while(node != null)
        {
            count++;
            node = node.next;
        }
        return count;
    }
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        
        if(headA == null || headB == null)
            return null;
        int c1 = count(headA);
        int c2 = count(headB);
        
        while(c1 > c2)
        {
            headA = headA.next;
            c1--;
        }
        while(c2 > c1)
        {
            headB = headB.next;
            c2--;
        }
        while(headA != null && headB != null)
        {
            if (headA == headB)
                return headA;
            headA = headA.next;
            headB = headB.next;
        }
        return null;
        
        
    }
}