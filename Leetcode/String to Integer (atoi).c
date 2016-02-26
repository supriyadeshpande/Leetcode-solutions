/******************

Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.
******************/

public class Solution {
    public int myAtoi(String str) {
        
        if(str.length() == 0)
            return 0;
        
        int i = 0;
        while(str.charAt(i) == ' ')
        {
            i++;
            if(i == str.length())
                return 0;
        }
        int j = 0;
        char sign = '+';
        Boolean flag = false;
        int ans = 0;
        for(j = i; j < str.length(); j++)
        {
            if(str.charAt(j) == '+') {
                if(flag == true)
                    return ans;
                flag = true;
            }
            else if(str.charAt(j) == '-')
            {
                if(flag == true)
                    return ans;
                flag = true;
                sign = '-';
            }
            else if(Character.isLetter(str.charAt(j)) || str.charAt(j) == ' ')
            {
                break;
            }
            else 
            {
                
                if((sign == '-') && ((double)ans*10 + Character.getNumericValue(str.charAt(j)))> Integer.MAX_VALUE)
                {
                    return Integer.MIN_VALUE;
                }
                else if((sign == '+') && ((double)ans*10 + Character.getNumericValue(str.charAt(j)))>= Integer.MAX_VALUE)
                {                    
                    return Integer.MAX_VALUE;
                }
                ans = (ans*10) + Character.getNumericValue(str.charAt(j));
            }
        }
        if(sign == '-')
        {
            return (-ans);
        }
        return ans;
        
        
    }
}