/******************

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”

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
    
    public TreeNode findNode(TreeNode root, TreeNode p, TreeNode q, Boolean v1, Boolean v2)
    {
        if(root == null)
            return null;
        
        if(root == p) {
            v1 = true;
            return root;
        }
        if(root == q)
        {
            v2 = true;
            return root;
        }
        
        TreeNode left_lca = findNode(root.left, p, q, v1, v2);
        TreeNode right_lca = findNode(root.right, p, q, v1, v2);
        
        if(left_lca != null && right_lca != null)
        {
            return root;
        }
        
        return (left_lca != null ? left_lca : right_lca);
    }
    
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        
        if(root == null)
            return null;
        Boolean v1 = false, v2 = false;
        return (findNode(root, p,  q, v1, v2));
        
    }
}