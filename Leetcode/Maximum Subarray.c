/******************

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [−2,1,−3,4,−1,2,1,−5,4],
the contiguous subarray [4,−1,2,1] has the largest sum = 6.

******************/


public class Solution {
    public int maxSubArray(int[] nums) {
        
        if(nums.length == 0)
            return Integer.MIN_VALUE;
            
        
        
        int[] LIS = new int[nums.length+1];
        int i = 0;
        for(i = 0; i < nums.length; i++)
            LIS[i] = Integer.MIN_VALUE;
        LIS[i] = 0;
        
        int max = Integer.MIN_VALUE;
        for(i = nums.length-1; i >= 0; i--)
        {
            LIS[i] = Math.max(nums[i], LIS[i+1] + nums[i]);
            if(LIS[i] > max)
                max = LIS[i];
        }
        
        return max;
        
        
    }
}