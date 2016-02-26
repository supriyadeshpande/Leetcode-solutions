/******************

Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.

******************/


public class Solution {
    public boolean isAnagram(String s, String t) {
        
        int[] arr = new int[26];
        int i = 0;
        if(s.length() != t.length())
        {
            return false;
        }
        
        for(i = 0; i < s.length(); i++)
        {
            int k = s.charAt(i);
            arr[k - 97]++;
        }
        
        for(i = 0; i < t.length(); i++)
        {
            int k = t.charAt(i);
            arr[k - 97]--;
        }
        for(i = 0; i < arr.length; i++)
        {
            if(arr[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
}