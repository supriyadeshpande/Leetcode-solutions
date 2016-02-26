/******************

Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

******************/


public class Solution {
    public int removeDuplicates(int[] nums) {
        
        if(nums.length == 0 || nums.length == 1)
            return nums.length;

        int i = 0, j = 1, k = 1;
        
        for(i = 0; i < nums.length; i++)
        {
            while(nums[i] >= nums[j])
            {
                j++;
                if(j >= nums.length)
                    return k;
            }
            if(nums[i] < nums[j])
            {
                int temp = nums[k];
                nums[k] = nums[j];
                nums[j] = temp;
                k++;
            }
        }
        return k;
    }
}