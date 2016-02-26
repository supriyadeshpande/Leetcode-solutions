/******************

Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

For example,
Given "egg", "add", return true.

Given "foo", "bar", return false.

Given "paper", "title", return true.

Note:
You may assume both s and t have the same length.

******************/


public class Solution {
    public boolean isIsomorphic(String s, String t) {
        
        if(s == " " && t == " ")
            return true;
        
        HashMap<Character, Character> myHash1 = new HashMap<Character, Character>();
        HashMap<Character, Character> myHash2 = new HashMap<Character, Character>();
        
        for(int i = 0; i < s.length(); i++)
        {
            if(myHash1.containsKey(s.charAt(i)) && myHash2.containsKey(t.charAt(i)))
            {
                if(myHash1.get(s.charAt(i)).equals(t.charAt(i)))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
            else if(!myHash1.containsKey(s.charAt(i)) && !myHash2.containsKey(t.charAt(i)))
            {
                myHash1.put(s.charAt(i),t.charAt(i));
                myHash2.put(t.charAt(i),s.charAt(i));
            }
            else
            {
                return false;
            }
        }
        return true;
        
        
    }
}