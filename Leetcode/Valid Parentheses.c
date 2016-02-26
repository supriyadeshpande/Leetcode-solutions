/******************

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

******************/

public class Solution {
    public boolean isValid(String s) {
        
        Stack<Character> myStack = new Stack<Character>();
        
        if(s.length() == 0)
            return true;
        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) == '(') || (s.charAt(i) == '[') || (s.charAt(i) == '{'))
            {
                myStack.push(s.charAt(i));
            }
            else if(s.charAt(i) == ')' && (myStack.empty() || (myStack.pop() != '(')))
                return false;
            else if(s.charAt(i) == ']' && (myStack.empty() || (myStack.pop() != '[')))
                return false;
            else if(s.charAt(i) == '}' && (myStack.empty() || (myStack.pop() != '{')))
                return false;
        }
        return (myStack.empty() ? true : false);
        
        
    }
}