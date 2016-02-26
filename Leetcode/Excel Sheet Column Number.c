/******************

Given a column title as appear in an Excel sheet, return its corresponding column number.

******************/


public class Solution {
    public int titleToNumber(String s) {
        
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++)
        {
            ans = (26*ans) + ((int) s.charAt(i) - 64);
        }
        return ans;
        
    }
}