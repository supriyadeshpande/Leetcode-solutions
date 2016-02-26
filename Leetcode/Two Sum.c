/******************

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
******************/

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int[] sol = new int[2];
        
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(target - nums[i])) {
                sol[0] = map.get(target - nums[i]);
                sol[1] = i + 1;
                return sol;
            }
            map.put(nums[i], i + 1);
        }
        return sol;
    }
}