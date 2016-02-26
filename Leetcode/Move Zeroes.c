/******************

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
1. You must do this in-place without making a copy of the array.
2. Minimize the total number of operations.

******************/


public class Solution {
    public void moveZeroes(int[] nums) {
        int j = 0, i = 0;
        boolean flag = false;
        
        int realLength;// = nums.length;
        for(realLength = nums.length - 1; realLength>=0;)
        {
            if(nums[realLength] == 0)
                realLength--;
            else
                break;
        }
        
        
            
        for(i = 0; i <= realLength; i++)
        {
            if(nums[j] == 0)
            {
                while(nums[i] == 0)
                {
                    i++;
                    if(i > realLength) {
                        flag = true;
                        break;
                    }
                        
                }
                if(flag == true)
                    break;
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
            j++;
            if(j > realLength)
                break;
        }
    }
}