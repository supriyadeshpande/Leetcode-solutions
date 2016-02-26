/******************

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example, 
Given s = "Hello World",
return 5.

******************/


public class Solution {
    public int lengthOfLastWord(String s) {
        int count = 0, i = s.length() - 1;
        if((i+1) == 0)
            return 0;
        while(s.charAt(i) == ' ')
        {
            if(i == 0)
                return 0;
            i--;
            
        }
        while(s.charAt(i) != ' ')
        {
            count++;
            if(--i < 0)
                return count;
            
        }
        return count;
    }
}