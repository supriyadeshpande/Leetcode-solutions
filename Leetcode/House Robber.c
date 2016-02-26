/******************

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

******************/


public class Solution {
    public int rob(int[] nums) {
        
        if(nums.length==0)
            return 0;
        if(nums.length == 1)
            return nums[0];
        int[] money = new int[nums.length];
        int max = 0;
        for(int i = 0; i < nums.length; i++)
        {
            if((i >= 2) && (max < money[i-2]))
            {
                max = money[i-2];
            }
            money[i] = max + nums[i];
            
        }
        
        if(money[nums.length-2] >= money[nums.length-1])
            return money[nums.length - 2];
        else
            return money[nums.length - 1];
        
    }
}