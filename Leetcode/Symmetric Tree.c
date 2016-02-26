/******************

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

******************/


/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    
    public boolean symmetric(TreeNode leftChild, TreeNode rightChild)
    {
        if(leftChild == null && rightChild == null)
            return true;
        else if (leftChild != null && rightChild != null) {
            if(leftChild.val == rightChild.val)
            {
                if((symmetric(leftChild.left, rightChild.right)) && (symmetric(leftChild.right, rightChild.left)))
                    return true;
            }
        }
        return false;
    }
    
    public boolean isSymmetric(TreeNode root) {
        if(root == null || symmetric(root.left, root.right))
            return true;
        return false;
        
        
        
    }
}