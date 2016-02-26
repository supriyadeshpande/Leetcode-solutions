/******************

Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.



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
    List<Integer> sol = new ArrayList<Integer>();
    int level  = 0;
    public void rightView(TreeNode root, int next_level)
    {
        if(root == null)
            return;
        if(level < next_level)
        {
            sol.add(root.val);
            level = next_level;
        }
            
        rightView(root.right, next_level + 1);
        rightView(root.left, next_level + 1);
    }
    public List<Integer> rightSideView(TreeNode root) {
        
        if (root == null)
            return sol;
        else
            rightView(root, 1);
        return sol;
        
        
    }
}