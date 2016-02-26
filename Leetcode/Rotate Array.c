/******************

Rotate an array of n elements to the right by k steps.

For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].

Note:
Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.

******************/


public class Solution {
    public void rotate(int[] nums, int k) {
        
        if(nums.length == 0)
        {
            return;
        }
        int x = 0;
        List<Integer> myList = new ArrayList<Integer>();
        if(k > nums.length)
        {
            x = nums.length - (k%nums.length);
        }
        else
        {
            x = nums.length - k;
        }
        
        for(int i = x; i < nums.length; i++)
        {
            myList.add(nums[i]);
        }
        for(int i = 0; i < x; i++)
        {
            myList.add(nums[i]);
        }
        
        for(int i = 0; i < myList.size(); i++)
        {
            nums[i] = myList.get(i);
        }
        
        
    }
}