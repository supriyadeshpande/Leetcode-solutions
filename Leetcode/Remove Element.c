/******************

Given an array and a value, remove all instances of that value in place and return the new length.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

******************/


public class Solution {
    public int removeElement(int[] nums, int val) {
        
        if(nums.length == 0)
            return 0;
        
        int m = 0;
      
        for(int i = 0; i < nums.length; i++)
        {
            if(nums[i] != val)
            {
                nums[m] = nums[i];
                m++;
            }
        }
        return m;
    }
}