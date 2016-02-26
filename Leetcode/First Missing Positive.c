/******************

Given an unsorted integer array, find the first missing positive integer.

For example,
Given [1,2,0] return 3,
and [3,4,-1,1] return 2.

Your algorithm should run in O(n) time and uses constant space.

******************/


public class Solution {
    public int firstMissingPositive(int[] nums) {
        //for(int  i = 0; i < nums.length; i++)
        
        if(nums.length == 0)
        {
            return 1;
        }
        
        int i = 0;
        while(i < nums.length)
        {
            if(nums[i] <= 0 || nums[i] >= nums.length || nums[i] == i+1)
            {
                i++;
                continue;
            }
            else
            {
                if(nums[nums[i]-1] != nums[i] )
                {
                    int a = nums[nums[i] - 1];
                    nums[nums[i] - 1] = nums[i];
                    nums[i] = a;
                    continue;
                }
                else
                {
                    i++;
                    continue;
                }
                
            }
        }
        
        for( i = 0;  i< nums.length; i++)
        {
            if(nums[i] - 1 != i)
            {
                return i+1;
            }
        }
        
        
        return i+1;
    }
}