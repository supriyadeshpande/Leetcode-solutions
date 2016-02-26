/******************

Given a sorted integer array without duplicates, return the summary of its ranges.

For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"].

******************/


public class Solution {
    public List<String> summaryRanges(int[] nums) {
        
        List<String> str = new ArrayList<String>();
        StringBuilder s = new StringBuilder();
        for(int i = 0; i < nums.length; i++ )
        {

            int start = nums[i];
            int end = nums[i];
            while((i+1 < nums.length) && (nums[i+1] == (nums[i]+1)))
            {
                end = nums[++i];
            }
            if(start == end)
            {
                s.append(start);
            }
            else {
                s.append(start).append("->").append(end);
            }
            str.add(s.toString());
            s.setLength(0);
        }
        return str;
    }
}